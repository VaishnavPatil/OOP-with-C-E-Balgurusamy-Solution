# Object Oriented Programming with C++ Exercises

This repository contains solutions to the programming exercises found in the book "Object Oriented Programming with C++" by E. Balagurusamy. The exercises cover a wide range of topics related to object-oriented programming (OOP) using the C++ programming language.

## Chapter 3 - Exercise 3.1

### Exercise 3.1 Code: [Exercise_3_1.cpp](https://github.com/VaishnavPatil/OOP-with-C-E-Balgurusamy-Solution/blob/main/Chapter-3/Exercise_3_1.cpp)

This C++ program, part of Chapter 3, demonstrates a simple implementation. Users are prompted to enter two integer values, and the program then displays the original values before swapping. The `swap` function, designed to take two integer pointers as parameters, facilitates the exchange of values stored in the memory locations pointed to by these pointers. Following the swap, the program prints the updated values.

## Usage

1. Run the program.
2. Enter the values of `a` and `b` as prompted.
3. Observe the original values and the values after swapping.

## Code Overview

- The `swap` function takes two integer pointers and swaps the values they point to.
- The `main` function:
  - Prompts the user to input two integers.
  - Displays the original values.
  - Calls the `swap` function to interchange the values.
  - Outputs the modified values.

This program serves as a fundamental illustration of pointer usage in C++ for swapping variables.

---

### Exercise 3.2

# Dynamic Memory Allocation in C++

This C++ program demonstrates dynamic memory allocation by creating a vector of integers based on user input. It uses the `new` operator to allocate memory for the vector, and the program prompts the user to specify the size. After allocation, the memory is properly deallocated using the `delete[]` operator to prevent memory leaks.

## Problem Statement

Write a function that creates a vector of a user-given size `M` using the `new` operator.

## Code Overview

- **File**: [Exercise_3_2.cpp](https://github.com/VaishnavPatil/OOP-with-C-E-Balgurusamy-Solution/blob/main/Chapter-3/Exercise_3_2.cpp)
- **Function**: `int* createVector(int size)`: Dynamically allocates memory for an integer array of the specified size and returns a pointer to the first element.

## Usage

1. Compile the program using a C++ compiler (e.g., g++).
   ```bash
   Exercise_3_2.cpp -o Exercise_3_2

# Triangular Number Pattern Generator

This C++ program allows users to determine the size of a pattern and prints a triangular pattern of numbers. The user is prompted to input the size of the pattern, and the program then generates a pattern where each row consists of repeated numbers based on the row number.

## Problem Statement

Write a C++ program to print the following output using nested for loops:



## Program Overview

- **File**: [Exercise_3_3.cpp](https://github.com/VaishnavPatil/OOP-with-C-E-Balgurusamy-Solution/blob/main/Chapter-3/Exercise_3_3.cpp)
- **Description**: The program uses nested loops to create a triangular pattern of numbers. However, please note that there is an error in the original version of the code where `i` is incorrectly used instead of `j` in the inner loop condition.

## Usage

1. Compile the program using a C++ compiler (e.g., g++).
   ```bash
   g++ Exercise_3_3.cpp -o Exercise_3_3

   ./Exercise_3_3

Feel free to copy and use this content for your README.md file. If you have any further questions or requests, please let me know!


# Investment Equation Calculator
**File**: [Exercise_3_4.cpp](https://github.com/VaishnavPatil/OOP-with-C-E-Balgurusamy-Solution/blob/main/Chapter-3/Exercise_3_4.cpp)
## Problem Statement

You are tasked with developing a C++ program, named `Exercise_3_4.cpp`, to calculate and print the values of an investment equation for various combinations of principal amount (P), interest rate (r), and time (n). The investment equation is given by \(V = P(1+r)^n\), representing the future value of an investment based on its principal, interest rate, and time period.

## Requirements

1. Implement the program in C++.
2. Use nested loops to iterate through predefined ranges of P, r, and n.
3. Calculate the corresponding value of V for each combination of P, r, and n.
4. Print the results in a table format.

## Input Values

The program should consider the following values:

- **Principal Amount (P):** 1000, 2000, 3000, ..., 10000
- **Interest Rate (r):** 0.10, 0.12, 0.13, ..., 0.20
- **Time (n):** 1, 2, 3, ..., 10

## Formula

The investment equation is given by \(V = P(1+r)^n\). Note that \(P\) is the principal amount, \(r\) is the interest rate, \(n\) is the time, and \(V\) is the value of money at the end of \(n\) years.

g++ Exercise_3_4.cpp -o Exercise_3_4
./Exercise_3_4

P = 1000, r = 0.10, n = 1, V = ...
P = 1000, r = 0.10, n = 2, V = ...
...

