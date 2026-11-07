#include <stdio.h>
#include <string.h>

/*
 * Lesson 5: Arrays and strings
 *
 * An array is a row of boxes that all hold the same type of value.
 * Positions start at 0, not 1! An array of 5 numbers has positions 0 to 4.
 *
 * A string in C is just an array of characters that ends with '\0'.
 */

int main(void) {
    /* --- Arrays of numbers --- */
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("First number:  %d\n", numbers[0]);
    printf("Third number:  %d\n", numbers[2]);

    numbers[1] = 99;   /* change one value */

    int size = sizeof numbers / sizeof numbers[0];   /* how many boxes */
    printf("\nThe array has %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("  numbers[%d] = %d\n", i, numbers[i]);
    }

    /* Compute the sum of all the numbers */
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    printf("Sum = %d\n", sum);

    /* --- Strings --- */
    char name[] = "Kenzy";   /* 5 letters + the hidden '\0' at the end */

    printf("\nName: %s\n", name);
    printf("Length: %zu letters\n", strlen(name));
    printf("First letter: %c\n", name[0]);

    /* Print the string one letter at a time */
    printf("Letters:");
    for (int i = 0; name[i] != '\0'; i++) {
        printf(" %c", name[i]);
    }
    printf("\n");

    /* Useful functions from <string.h> */
    char copy[20];
    strcpy(copy, name);          /* copy a string */
    strcat(copy, " rocks!");     /* glue a string at the end */
    printf("\n%s\n", copy);

    if (strcmp(name, "Kenzy") == 0) {   /* compare two strings */
        printf("The name is Kenzy.\n");
    }

    /*
     * WARNING: never write outside the array. numbers[5] does not exist
     * and C will NOT stop you. Always stay between 0 and size - 1.
     *
     * EXERCISES (change the code, then run it again):
     * 1. Change the numbers in the array and check the sum.
     * 2. Find and print the biggest number in the array (use a loop and an if).
     * 3. Print the array backwards (from the last box to the first).
     * 4. Put your own name in the "name" string and count its letters.
     * 5. Challenge: count how many times the letter 'a' appears in a string.
     */

    return 0;
}
