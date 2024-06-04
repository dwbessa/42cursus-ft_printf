# 42 School printf Project

## Project Description

In this project, I implemented my own version of the `printf` function in the C language using custom functions and parameters. This challenge is part of the 42 School curriculum and aims to deepen the understanding of how the `printf` function works internally in the C language.

## Features Implemented

- **Format Specifiers**: My implementation supports a variety of format specifiers, such as `%c`, `%s`, `%d`, `%x`, `%p`.

- **Variable Arguments**: The original `printf` function in C allows you to pass a variable number of arguments. My implementation also handles this functionality, allowing you to pass as many arguments as needed.

- **Custom Formatting**: In addition to standard format specifiers, my implementation offers support for custom format specifiers that can be defined and used according to the user's needs.

## How to Use

1. Clone this repository to your local machine:

   ```shell
   git clone https://github.com/dwbessa/42cursus-ft_printf.git

2. Compile the project. You can use the provided makefile:
   ```
   make

3. Now you can use the ft_printf function in your C programs just like the standard printf function:
   ```
   #include "ft_printf.h"

   int main()
   {
    ft_printf("Hello, %s! You are %d years old.\n", "John", 25);
    return 0;
   }
