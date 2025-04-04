# Square Root Calculator

This project implements a simple **Square Root Calculator** in C. It uses a binary search algorithm to approximate the square root of a given number with a precision of 0.1. The program also includes a custom implementation of a string-to-integer conversion function.

---

## Features

- **Binary Search Algorithm**: Efficiently calculates the square root of a number.
- **Custom String-to-Integer Conversion**: Converts input strings to integers without relying on standard library functions like `atoi`.
- **Precision Control**: Approximates the square root to two decimal places.

---

## How It Works

1. The program takes a single command-line argument, which is the number for which the square root is to be calculated.
2. The input string is converted to an integer using the `a2i` function.
3. A binary search algorithm is applied to find the square root of the number.
4. The result is printed with a precision of two decimal places.

---

## Usage

### Compilation

To compile the program, use the following command:

```bash
gcc main.c-o main.o -lm
```

### Execution

Run the program with a number as an argument:

```bash
./main.o <number>
```

For example:

```bash
./main.o 25
```

Output:

```
Number is - 25
Square root is 5.00
```

---

## Code Highlights

### String-to-Integer Conversion (`a2i`)

The `a2i` function converts a string to an integer by iterating through each character and calculating its numeric value using positional arithmetic.

### Binary Search for Square Root

The binary search algorithm iteratively narrows down the range of possible square root values until the desired precision is achieved.

---

## Limitations

- The program assumes the input is a valid positive integer.
- The precision is fixed at 0.1 and may not be suitable for all use cases.

---

Happy Coding! 🚀  