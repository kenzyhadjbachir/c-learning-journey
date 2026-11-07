#include <stdio.h>

/*
 * Lesson 1: Variables and types
 *
 * A variable is a named box that holds a value.
 * In C, you must say what TYPE of value the box holds.
 */

int main(void) {
    int age = 20;             /* whole numbers */
    float height = 1.70f;      /* decimal numbers */
    double pi = 3.14159265;    /* decimal numbers, more precise */
    char letter = 'C';         /* one single character */

    printf("Age: %d\n", age);
    printf("Height: %.2f m\n", height);
    printf("Pi: %.5f\n", pi);
    printf("Letter: %c\n", letter);

    /* You can do math with numbers */
    int a = 7;
    int b = 2;
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d (integer division drops the decimals)\n", a, b, a / b);
    printf("%d %% %d = %d (the remainder)\n", a, b, a % b);

    /*
     * EXERCISES (change the code, then run it again):
     * 1. Change the values of age and letter to your own.
     * 2. Add a new int variable called year and print it.
     * 3. Try printing 7 / 2.0 instead of 7 / 2. What changes, and why?
     */

    return 0;
}
