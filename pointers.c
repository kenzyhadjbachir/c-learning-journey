#include <stdio.h>

/*
 * Lesson 6: Pointers
 *
 * Every variable lives somewhere in the computer's memory, at an ADDRESS.
 * A pointer is a variable that stores the address of another variable.
 *
 *   &x    means "the address of x"
 *   *p    means "the value that p points to"
 *   int *p   declares a pointer to an int
 */

/* This function receives COPIES, so it cannot change the originals */
void try_to_change(int n) {
    n = 100;
    printf("  inside try_to_change: n = %d (only the copy changed)\n", n);
}

/* This function receives ADDRESSES, so it really changes the originals */
void change(int *n) {
    *n = 100;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int age = 20;
    int *p = &age;   /* p points to age */

    printf("age            = %d\n", age);
    printf("address of age = %p\n", (void *)&age);
    printf("p (the address)= %p\n", (void *)p);
    printf("*p (the value) = %d\n", *p);

    /* Change age THROUGH the pointer */
    *p = 21;
    printf("\nAfter *p = 21, age is now %d\n", age);

    /* --- Why pointers are useful: functions that change variables --- */
    int x = 5;
    try_to_change(x);
    printf("\nAfter try_to_change: x = %d (not changed)\n", x);
    change(&x);
    printf("After change:        x = %d (changed!)\n", x);

    int a = 1;
    int b = 2;
    swap(&a, &b);
    printf("\nAfter swap: a = %d, b = %d\n", a, b);

    /* --- Pointers and arrays are close friends --- */
    int numbers[3] = {10, 20, 30};
    int *q = numbers;   /* the name of an array is its address */

    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("*(q + %d) = %d\n", i, *(q + i));   /* same as numbers[i] */
    }

    /* NULL is the pointer that points to nothing */
    int *nothing = NULL;
    if (nothing == NULL) {
        printf("\n'nothing' points to nothing. Never use * on a NULL pointer!\n");
    }

    /*
     * EXERCISES (change the code, then run it again):
     * 1. Make p point to another variable and print its value with *p.
     * 2. Write a function  void double_it(int *n)  that doubles a number.
     * 3. Write a function  void reset(int *n)  that sets a number to 0.
     * 4. Challenge: write a function that takes an array and a size,
     *    and adds 1 to every number in it.
     */

    return 0;
}
