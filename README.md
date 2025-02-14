# Undefined Behavior in C++ Vector

This repository demonstrates a common, yet subtle, undefined behavior issue in C++ when using `std::vector`.  The `bug.cpp` file contains code that modifies a vector after obtaining a raw pointer to one of its elements. This action invalidates the pointer, leading to unpredictable results.

The `bugSolution.cpp` file offers a corrected version of the code that avoids undefined behavior, illustrating best practices for working with vectors and iterators.