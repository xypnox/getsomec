# Basics of C

The C language has a lot of syn tax and code. Here are the minimal basics.

## Libraries

Libraries have most of the regular functions we use such as `printf()`.

To include Libraries use `#include`.

For example

```c
#include <stdio.h> /*Contains functions for standard input output*/
```

## Main Function

Every program has a `main()` function. This is the point where the code of the program starts its evaluation. This is the function the compilers starts first with.

Here is the format of a simple main function:

```c
int main() {
    /*Your code Goes here*/
    return 0;
}
```

## Hello World

Every language has a simple Hello World! program which prints the text "Hello World!".

A Hello World program looks something like this in C.
```c
#include <stdio.h>

int main() {
    printf("Hello World!\n");
    return 0;
}
```

## Printing Things

The `printf()` function is quite powerful.

Here are some (not an exhaustive list) ways of Printing things in C.

#### Simple text

```c
printf("Hi I am some text");
```

#### Printing variables

We use modifiers such as %[] to print variables

```c
int a = 3, b = 5;

printf("The sum of a + b is : %i\n", a + b);
```
The ways %[something] can be used where something is:

**d or i** for numbers. Integers specifically.

**f** for floating point numbers.

**e** for scientific Notation.

**s** for a string of characters.

> **For Decimals and Padding** You can use `%12.5f` or `%12.5e` for having the total variable occupy at most 12 spaces with 5 decimal points. Additionally `e` displays it in exponential.

#### Escape sequences

`\n` : Newline, Places output to a new line.

`\t` : Tabbs the following content.

`\0` : used to end the character string.

# Command Line arguments

- [CLA](https://www.tutorialspoint.com/cprogramming/c_command_line_arguments.htm)

# Resources

- [Secrets of printf()](http://www.cypress.com/file/54441/download)
