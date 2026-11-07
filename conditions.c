#include <stdio.h>

/*
 * Lesson 2: Conditions and loops
 *
 * Conditions let your program make choices (if / else).
 * Loops let it repeat things (for / while).
 */

int main(void) {
    /* --- Conditions: if / else if / else --- */
    int age = 17;

    if (age >= 18) {
        printf("You are an adult.\n");
    } else if (age >= 13) {
        printf("You are a teenager.\n");
    } else {
        printf("You are a child.\n");
    }

    /*
     * Comparison operators: ==  !=  <  >  <=  >=
     * Logical operators:    &&  (and)   ||  (or)   !  (not)
     * Careful: = assigns a value, == compares two values!
     */
    int score = 85;
    if (score >= 50 && score < 100) {
        printf("Score %d: passed, but not perfect.\n", score);
    }

    /* --- Loop 1: for (when you know how many times) --- */
    printf("\nCounting from 1 to 5:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    /* --- Loop 2: while (repeat as long as a condition is true) --- */
    printf("\nCountdown:\n");
    int n = 3;
    while (n > 0) {
        printf("%d...\n", n);
        n--;
    }
    printf("Liftoff!\n");

    /* --- Putting them together: even or odd? --- */
    printf("\nEven or odd from 1 to 6:\n");
    for (int i = 1; i <= 6; i++) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }

    /*
     * EXERCISES (change the code, then run it again):
     * 1. Change age to 20 and 10. Does the message change as expected?
     * 2. Make the "for" loop count from 1 to 10.
     * 3. Make the countdown start at 10 instead of 3.
     * 4. Print only the multiples of 3 between 1 and 30.
     * 5. Challenge: print the multiplication table of 7 (7 x 1 ... 7 x 10).
     */

    return 0;
}
