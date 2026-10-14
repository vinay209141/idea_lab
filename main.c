/**
 * @file main.c
 * @brief A simple program to add two integers.
 *
 * This program demonstrates Doxygen-style documentation comments in C.
 */

#include <stdio.h>

/**
 * @brief Adds two integers.
 *
 * @param a First number.
 * @param b Second number.
 * @return Sum of a and b.
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * @brief Main function.
 *
 * Entry point of the program.
 *
 * @return 0 when the program finishes successfully.
 */
int main(void)
{
    int x = 10;
    int y = 20;
    int result = add(x, y);

    printf("Sum is: %d\n", result);
    return 0;
}
