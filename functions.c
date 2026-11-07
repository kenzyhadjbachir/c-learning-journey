#include <stdio.h>

/*
 * Lesson 4: Functions
 *
 * A function is a small program inside your program, with a name.
 * You write it once, then you can use ("call") it as many times as you want.
 *
 * A function has:
 *   - a return type  (what it gives back: int, double, void = nothing)
 *   - a name
 *   - parameters     (the values it receives)
 *   - a body         (the code between { })
 */

/* A function that gives nothing back (void) */
void say_hello(void) {
    printf("Hello from a function!\n");
}

/* A function with parameters that returns an int */
int add(int a, int b) {
    return a + b;
}

/* A function that returns a double */
double average(double a, double b) {
    return (a + b) / 2;
}

/* A function that returns 1 (true) or 0 (false) */
int is_even(int n) {
    return n % 2 == 0;
}

/* A function that calls another function */
int square(int n) {
    return n * n;
}

int sum_of_squares(int a, int b) {
    return add(square(a), square(b));
}

/* A recursive function: it calls itself. 5! = 5 * 4 * 3 * 2 * 1 */
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(void) {
    say_hello();
    say_hello();   /* call it as many times as you want */

    printf("\n3 + 4 = %d\n", add(3, 4));
    printf("Average of 7 and 10 = %.1f\n", average(7, 10));

    for (int i = 1; i <= 4; i++) {
        if (is_even(i)) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }

    printf("\n3^2 + 4^2 = %d\n", sum_of_squares(3, 4));
    printf("5! = %d\n", factorial(5));

    /*
     * IMPORTANT: a function must be written ABOVE main (or declared above it),
     * otherwise the compiler does not know it yet.
     *
     * EXERCISES (change the code, then run it again):
     * 1. Write a function  int max(int a, int b)  that returns the bigger number.
     * 2. Write a function  int cube(int n)  and print cube(3).
     * 3. Write a function  void print_stars(int n)  that prints n stars (*).
     * 4. Challenge: write a function  int power(int base, int exp)  using a loop.
     */

    return 0;
}
