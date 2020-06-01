# RottenCore


## What is this?
----
> This is library is aimed to be an easy to use open source Linear Algebra System.



## Purpose
----
> While doing my personal microcontroller projects, I occasionally find myself needing to employ an algorithm that uses Linear Algebra concepts.  While I do enjoy math, working on employing a Linear Algebra function is usually not the goal of my project.  Repetitive exercises like matrix multiplication to project derailing task like finding eigenvalues or eigenvectors, all take time away from the coder's original focus of their project.  This is a library that has been worked on and off, since 2017.  It is hopeful that this library might be helpful in your endeavors.



## Microcontrollers planned for support
----
* Atmeg ARV
* ARM
* PIC
* ESP32
* Sparkfun Artemis (Apollo)

Why does this matter?
> Usually BLAS libraries are optimized for a target platform.  Meaning the functions are specifically tailored to work in a way that runs the best on a given platform.  It would be expected (maybe not if your new to this) if your using an algorithm that uses linear algebra, the operations need to be preformed repetitively, fast and accurately.  This is in the case with digital signal processing (DSP).  Probably more expected is that all microcontrollers are not the same with the circuits under the hood.  All microcontrollers have their strengths and weaknesses.  In particular, this library cares about the special hardware built under the hood of the chip.  Some chips can have branch prediction (like with ARM) while others can have zero-overhead loops (like with some PIC chips and the ESP32).

Note about unsupported chips...
> While the library will not be optimized to use the specific hardware of your platform to give the best performance, preprocessor directives are in charge of doing the changes to the source code that automatically employ the optimizations.  If it doesn't make an optimization, the base source code of the library is left as is.  So the library should still run just fine with any GNU C compiler, since the code is just C code.  As expected, the code generated will be slower then what it could have been.  Some people might care others will not, depending on your project.


*The chips that are supported is due to what we have available to test, rather then having a preference*




## How hard is this library to use?
----
Readability and consistency of code is cared about more than anything else.


### Naming Scheme

*This will probably be moved to the wiki in the future*


This is a fine balance to set.  One could have chosen a naming scheme such as,

    matrix_multiply_vector(Matrix4, VectorC, MatrixAB)

When using a number of different matrices and vectors, it was found that which matrix is used for the multiplication and which matrix is used to store the result can become unclear.  A solution could be to have the user label one matrix as Matrix_ret, this is a poor choice since forces the user to append *_ret* to the name is far from ideal.  Another debated option was

    vector_equals_matrix_multiply_vector(VectorC, MatrixApple, Vector4)

This would give the user the impression that '*VectorC*' now hold the result from multiplying '*MatrixApple*' with '*Vector4*'.  
While this solves the problem of making the functions in the source code easy to identify and understand without needing further explanation from the documentation, this solution becomes rather tedious to write as the use progresses.

    vector_equals_matrix_multiply_vector(VectorC, MatrixApple, Vector4)
    matrix_equals_matrix_plus_matrix(MatrixApple, MatrixFoo, MatrixBar)
    scalar_equals_vector_dot_vector(scalar_offset, Vector_driveVotlage, Vpower)

That is terrible amount of writing. Since the only two data types that are used in this library are matrices and vector, it was decided to abbreviate them the '*m*' for matrix and '*v*' for '*vector*'.  This reduced the above code required writing without removing the meaning at a glance.

    v_equals_m_multiply_v(VectorC, MatrixApple, Vector4)
    m_equals_m_plus_m(MatrixApple, MatrixFoo, MatrixBar)
    s_equals_v_dot_v(scalar_offset, Vector_driveVotlage, Vpower)

Next the word equals was removed for the following look.

    v__m_multiply_v(VectorC, MatrixApple, Vector4)
    m__m_plus_m(MatrixApple, MatrixFoo, MatrixBar)
    s__v_dot_v(scalar_offset, Vector_driveVotlage, Vpower)




## What do I need to know to use this library?
----
*If you are downloading this library as a dependency for another library, the following may or may not be a concern.  Look at the the other libraries documentation if you are required to use any BLAS functions.*



If you wish to use this library, you will need to know some linear algebra and concepts on numerical computation.

While the library will perform the functions on matrices and vectors, one should know some basic concepts to understand the results that are return (such as the resulting matrix size after performing matrix multiplication), and which operation frankly can't happen (such as trying to invert a matrix that is singular).  It also helps to know the terminology used such as dot product, singular matrix or eigenvector.  If you know what linear algebra operations you need and have an solid understanding of linear algebra, then your good to go.  If you don't know what linear algebra is, this library might be challenging to use.  While this a crash courses of Linear Algebra is not include in this library as of yet, there are several online resources such, as Khan Academy, that do a great job at this.

There are also additional numerical considerations when computing numbers.  When a computer attempts perform an operation on two floats, did you know that a computer (while an amazing) is not exact?  Did you also know that as you continue to perform operations on that same float, this error accumulates?  For certain situations, this will not matter.  For other situation, this can make or break the code.  This also can have **serious** implications on how you might order the rows in a matrix.  One ordering might work, and another ordering can break the code.  
(A tutorial series discussing this is in the works)



## License
Copyright (C) 2020, Andrew Meinke

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE X CONSORTIUM BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


Except as contained in this notice, the name(s) of the above copyright holders shall not be used in advertising or otherwise to promote the sale, use or other dealings in this Software without prior written authorization.

