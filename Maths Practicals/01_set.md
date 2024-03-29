Practical 1: 

---
```cpp
#include <iostream>
#include <conio.h>
#include <vector>
#include <algorithm>
#include <cmath>
```
This block of code includes C++ Standard library headers.<br><br>
-->'&lt;iostream&gt;': This header is used for input and output operations. It defines the 'std::cin' and 'std::cout' objects.<br><br>
-->'&lt;conio.h&gt;': This header is specific to certain compliers. It provides functions for console input and output.<br><br>
-->'&lt;vector&gt;': This header provides the 'std::vector>' container class template, which is a dynamic array that can resize itself automatically when elements are added or removed. vectors are useful for storing sequences of elements, similar to arrays but with additional functionality such as dynamic resizing and member functions for common operations like adding, removing and accessing elements. A vector is chosen here because it provides dynamic resizing, allowing the set to hold a variable number of elements without needing to specify the size upfront. Additionally, vectors provide efficient random access to elements and various utility functions, making them suitable for representing sets. By using the standard library's vector container, the implementation benefits from its efficient memory management, dynamic resizing, and built-in functions for common operations on sequences.<br><br>
-->'&lt;algorithm&gt;': This header provides a collections of functions for performing various operations on sequences of elements, such as searching, sorting, and manipulating ranges. Some commonly used algorithms include 'std::sort()' for sorting elements in range, 'std::find()' for searching for a specific value, and 'std::max()'/'std::min()' for finding maximum and minimum elements in a range.<br><br>
-->'&lt;cmath&gt;: This header provides mathematical functions and constants. Functions like 'std::sqrt()', 'pow()', 'sin()', 'cos()' and 'log()' are included in this header.

---
```cpp
std::vector<int> elements;
```
'std::vector' is a standard template library(STL) container class in C++ that represents a dynamic array.<br><br>
'\<int\>: Specifies that this vector will hold elements of type 'int'. <br><br>
'element':it is a private member variable and it represents the elements contained within the set.<br><br>
