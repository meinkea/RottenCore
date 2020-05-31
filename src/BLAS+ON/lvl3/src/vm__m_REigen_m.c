/*! /file vm__m_REigen_m.c
 *
 */


#include "../inc/vm__m_REigen_m.h"


#include "../../gnd/datatypes/inc/vector.h"
#include "../../gnd/datatypes/inc/matrix.h"


#include "../../gnd/lvlZ/inc/array_copy.h"


// Maximum number of iteration the routine is allowed to converge by
//   (typically 7 iterations are need)
#define MAX_ITERATIONS 6


float vm__m_REigen_m(
  struct vector * vEigenVal,
  struct matrix * mEigenVec,
  const struct matrix * mA,
  struct matrix * mWork
) {
  // Deminsion Variables
  unsigned int n = mA->r;  // Dimension size
  unsigned int L = mA->l; // Length of Matrix Data

  float ** A = mA->m;

  float ** W = mWork->m;
  float * w = *W;
  array_copy(w, *A, 0, L);  // Initialize Work Matrix
  

  // Make EigenValue Vector data pointer
  float * EVal = vEigenVal->v;

  // Make EigenVecotr Matrix data pointer
  float ** EVec = mEigenVec->m;
  float * evec = *EVec;

  // 'for() loop' Index variables
  unsigned int iI = 0;  // General Index Counter
  unsigned int iR = 0;  // Row Index Counter
  unsigned int iC = 0;  // Column Index Counter


  // Copy the diagonal of A into the Eigen Value vector array
  for(iR=0, iC=0; iR<L; iR+=(n+1), ++iC) {
    EVal[iC] = w[iR];  // Initialize Eigenvalue  Matrix to Diagonal of matrix A
    evec[iR] = 1.000;  // Initialize Eigenvector Matrix to Identity matrix 
  }


  // Initialize Residue -> The upper diagonal terms are being considered 
  float residue = 0.0;
  for(iR=0; iR<(n-1); ++iR)         // Upper triangle uses all rows, except the last
    for(iC=(iR+1); iC<n; ++iC)      // Upper triangle starts 1 column index over compared to the row index
      residue += fabsf(W[iR][iC]);


  // Number or Timeout
  unsigned int iter = 0;  // number of iterations

  float cot2phi, tanhalfphi, tanphi, sinphi, cosphi = 0.0;
  float Rtmp, Ctmp = 0.0;
  float WiRiC_tmp  = 0.0;


  while ((residue > 0.0) && (iter++ < MAX_ITERATIONS)) {
    // Loop across the above diagaon (same as the residue)

    // Move across rows, all except last (because we are rotating the above diagonal elements)
    for(iR=0; iR<(n-1); ++iR) {

      // Move across all columns
      for(iC=(iR+1); iC<n; ++iC) {

        WiRiC_tmp = W[iR][iC];  // Dereference used var

        // Only iter on element if non-zero
        if(fabsf(WiRiC_tmp)>0.0) {

          // Calc cot(2*phi), phi is the Jacobi rotation angle
          cot2phi = 0.5 * (EVal[iC] - EVal[iR]) / WiRiC_tmp;

          // Calc tan(phi)
          tanphi = 1.0 / ( fabsf(cot2phi) + sqrtf(1.0 + cot2phi * cot2phi) );

          // Correct tan(phi)'s sign, ensuring the ulitization of the smaller solution
          if(cot2phi < 0.0) tanphi *= -1.0;

          // Calc the sine & cosine of the Jacobi rotation angle phi
          cosphi = 1.0 / sqrtf(1.0 + tanphi*tanphi);
          sinphi = tanphi * cosphi;

          // calc tan(phi/2)
          tanhalfphi = sinphi / (1.0 + cosphi);

          // set tmpf = tan(phi) * current matrix element, being used in update of leading diagonal elements
          WiRiC_tmp = tanphi * WiRiC_tmp;   //if(flag) return (float) tmpf;

          // Apply the Jacobian rotation to the diagonal elements [iR][iR] and [iC][iC[ storing in EigenValue vector
          //   Calc EVal[iR] = EVal[iR] - tan(phi) * A[iR][iC]
          EVal[iR] -= WiRiC_tmp;  //if(flag) return EVal[iR];
          
          //   Calc EVal[iC] = EVal[iR] + tan(phi) * A[iR][iC]
          EVal[iC] += WiRiC_tmp;  //if(flag) return EVal[iC];

          // by definition, iC results to 0.0 when applying the Jacobian rotation on element iR
          W[iR][iC] = 0.0;
          
          // Apply the Jacobian rotation to all elements of the eigenvector matrix
          for(iI=0; iI<n; ++iI) {
            // Store temperary loads
            Rtmp = EVec[iI][iR];  // EVec[iI][iR]
            Ctmp = EVec[iI][iC];  // EVec[iI][iC]

            // EVec[iI][iR] = EVec[iI][iR] - sin(phi) * (EVec[iI][iC] + tan(phi/2) * EVec[iI][iR])
               EVec[iI][iR] = Rtmp         - sinphi   * (Ctmp         + tanhalfphi *         Rtmp);

            // EVec[iI][iC] = EVec[iI][iC] + sin(phi) * (EVec[iI][iR] - tan(phi/2) * EVec[iI][iC])
               EVec[iI][iC] = Ctmp         + sinphi   * (Rtmp         - tanhalfphi *         Ctmp);
          }
          // apply the Jacobi rotation only to those elements of matrix A that can change

          // Enters on 2nd row iter
          for (iI=0; iI<iR; ++iI) {
            // Store temperary loads
            Rtmp = W[iI][iR];  // A[iI][iR]
            Ctmp = W[iI][iC];  // A[iI][iC]

            // 
            // A[iI][iR] = A[iI][iR] - sin(phi) * (A[iI][iC] + tan(phi/2) * A[iI][iR])
               W[iI][iR] = Rtmp      - sinphi   * (Ctmp      + tanhalfphi * Rtmp     );

            // A[iI][iC] = A[iI][iC] + sin(phi) * (A[iI][iR] - tan(phi/2) * A[iI][iC])
               W[iI][iC] = Ctmp      + sinphi   * (Rtmp      - tanhalfphi * Ctmp     );
          }

          // Enters on 2nd column iter
          for (iI=(iR+1); iI<iC; ++iI) {
            // Store temperary loads
            Rtmp = W[iR][iI];  // A[iR][iI]
            Ctmp = W[iI][iC];  // A[iI][iC]

            // A[iR][iI] = A[iR][iI] - sin(phi) * (A[iI][iC] + tan(phi/2) * A[iR][iI])
               W[iR][iI] = Rtmp      - sinphi   * (Ctmp      + tanhalfphi * Rtmp     );

            // A[iI][iC] = A[iI][iC] + sin(phi) * (A[iR][iI] - tan(phi/2) * A[iI][iC])
               W[iI][iC] = Ctmp      + sinphi   * (Rtmp      - tanhalfphi * Ctmp     );
          }

          for (iI=(iC+1); iI<n; ++iI) {
            // Store temperary loads
            Rtmp = W[iR][iI];  // A[iR][iI]
            Ctmp = W[iC][iI];  // A[iC][iI]

            // A[iR][iI] = A[iR][iI] - sin(phi) * (A[iC][iI] + tan(phi/2) * A[iR][iI])
               W[iR][iI] = Rtmp      - sinphi   * (Ctmp      + tanhalfphi * Rtmp     );

            // A[iC][iI] = A[iC][iI] + sin(phi) * (A[iR][iI] - tan(phi/2) * A[iC][iI])
               W[iC][iI] = Ctmp      + sinphi   * (Rtmp      - tanhalfphi * Ctmp     );
          }

        }  // End of test for matrix element already zero 'if(fabsf(WiRiC_tmp) >0.0)'

      }  // End across Columns 'for(iC=(iR+1); iC<n; ++iC)'
    }  // End across Row 'for(iR=0; iR<(n-1); ++iR)'


    // Compute the new residue
    residue = 0.0;
    for(iR=0; iR<(n-1); ++iR)
      for(iC=(iR+1); iC<n; ++iC)
        residue += fabsf(W[iR][iC]);


  }  // End of MAIN Loop 'while((residue > 0.0) && (iter++ < MAX_ITERATIONS))'
     //   Exits when residue is zero (Solution Converged) or if MAX_ITERATIONS was reached (timeout)
 
  // Mark residue as negative if the maximum number of iterations to converges exceeded
  return (iter < MAX_ITERATIONS) ? residue : (-1.0) * residue;

}


