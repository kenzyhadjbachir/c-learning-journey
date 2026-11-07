#include <stdio.h>

/*
 * Lesson 3: Writing files
 *
 * A program can save text into a file on your disk.
 * Steps: open the file -> write into it -> close it.
 *
 * fopen(name, mode) opens a file. The mode says what you want to do:
 *   "w"  write   (creates the file, ERASES it if it already exists)
 *   "a"  append  (adds at the end, keeps what is already there)
 *   "r"  read    (the file must already exist)
 * fopen returns NULL if it fails, so always check it!
 */

int main(void) {
    /* --- 1. Write a new file ("w") --- */
    FILE *file = fopen("notes.txt", "w");
    if (file == NULL) {
        printf("Error: could not open notes.txt\n");
        return 1;
    }

    fprintf(file, "My first file written in C!\n");
    fprintf(file, "Line 2: the answer is %d\n", 6 * 7);
    fclose(file);   /* always close the file when you are done */
    printf("notes.txt written.\n");

    /* --- 2. Add more text without erasing ("a") --- */
    file = fopen("notes.txt", "a");
    if (file == NULL) {
        printf("Error: could not open notes.txt\n");
        return 1;
    }

    fputs("Line 3: added later with append mode.\n", file);
    fclose(file);
    printf("notes.txt updated.\n");

    /* --- 3. Read it back ("r") to check what is inside --- */
    file = fopen("notes.txt", "r");
    if (file == NULL) {
        printf("Error: could not open notes.txt\n");
        return 1;
    }

    char line[100];
    printf("\nContent of notes.txt:\n");
    while (fgets(line, sizeof line, file) != NULL) {
        printf("  %s", line);
    }
    fclose(file);

    /*
     * ============================================================
     * COMMAND LINE COMMANDS (type them in a terminal / cmd window)
     * ============================================================
     *
     * Compile and run:
     *   make                       build all programs
     *   make run-files             compile and run this lesson
     *   make clean                 delete the compiled programs
     *   gcc -Wall -Wextra -std=c11 -o files files.c    compile by hand
     *   ./files                    run it (Linux / macOS / Git Bash)
     *   files.exe                  run it (Windows cmd, after compiling)
     *
     * See the file that was written:
     *   cat notes.txt              show the file (Linux / macOS)
     *   type notes.txt             show the file (Windows cmd)
     *   ls                         list the files in the folder
     *   dir                        list the files in the folder (Windows cmd)
     *
     * Delete the file to start fresh:
     *   rm notes.txt               (Linux / macOS)
     *   del notes.txt              (Windows cmd)
     *
     * Move around the folders:
     *   pwd                        show the current folder (Linux / macOS)
     *   cd                         show the current folder (Windows cmd)
     *   cd c-learning-journey      go into a folder
     *   cd ..                      go back one folder
     *
     * Git (save your work to GitHub):
     *   git status                 see what changed
     *   git add files.c            prepare a file for saving
     *   git commit -m "message"    save a snapshot
     *   git push                   send it to GitHub
     */

    /*
     * EXERCISES (change the code, then run it again):
     * 1. Change the text written to notes.txt, then run and check it
     *    with cat (or type).
     * 2. Run the program twice. Why does the file not grow? (Hint: "w")
     * 3. Add a fourth line using append mode.
     * 4. Write a file called numbers.txt that contains the numbers 1 to 10,
     *    one per line (use a for loop from Lesson 2).
     */

    return 0;
}
