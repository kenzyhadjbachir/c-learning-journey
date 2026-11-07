#include <stdio.h>
#include <string.h>

/*
 * Lesson 7: Structs
 *
 * A struct groups several variables (of different types) under one name.
 * It lets you build your own type, like a small form with several fields.
 */

struct Player {
    char name[20];
    int level;
    double health;
};

/* Pass a struct by value: the function gets a copy */
void print_player(struct Player p) {
    printf("%s | level %d | health %.1f\n", p.name, p.level, p.health);
}

/* Pass the ADDRESS of a struct to change the original (see Lesson 6) */
void level_up(struct Player *p) {
    p->level++;          /* p->level is a shortcut for (*p).level */
    p->health = 100.0;
}

int main(void) {
    /* Create a struct and fill its fields */
    struct Player hero;
    strcpy(hero.name, "Kenzy");
    hero.level = 1;
    hero.health = 80.5;

    print_player(hero);

    level_up(&hero);
    print_player(hero);

    /* Create and fill a struct in one line */
    struct Player enemy = {"Zombie", 3, 45.0};
    print_player(enemy);

    /* --- An array of structs --- */
    struct Player team[3] = {
        {"Alice", 5, 90.0},
        {"Bob", 2, 60.5},
        {"Chloe", 8, 100.0}
    };

    printf("\nTeam:\n");
    for (int i = 0; i < 3; i++) {
        print_player(team[i]);
    }

    /* Find the player with the highest level */
    int best = 0;
    for (int i = 1; i < 3; i++) {
        if (team[i].level > team[best].level) {
            best = i;
        }
    }
    printf("\nHighest level: %s (level %d)\n", team[best].name, team[best].level);

    /*
     * EXERCISES (change the code, then run it again):
     * 1. Add a field  int score  to the Player struct and print it too.
     * 2. Add a fourth player to the team (change the array size to 4).
     * 3. Write a function  void heal(struct Player *p)  that adds 10 health.
     * 4. Challenge: make your own struct, for example a Car with a brand,
     *    a speed and a price, then print three cars.
     */

    return 0;
}
