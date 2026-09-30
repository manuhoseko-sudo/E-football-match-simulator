#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// 1. Define the Team structure
struct Team {
    char name[50];
    int attack;
    int defense;
};

// 2. Function to generate goals based on ratings
int calculateGoals(int attackRating, int defenseRating) {
    // The difference between attack and defense
    int difference = attackRating - defenseRating;
    
    // Base goals can be 0 to 3
    int baseGoals = rand() % 4; 
    
    // Adjust goals based on the rating difference
    if (difference > 10) {
        baseGoals += 1; // Strong attack bonus
    } else if (difference < -10) {
        baseGoals -= 1; // Strong defense penalty
    }

    // Make sure goals don't go below 0
    if (baseGoals < 0) {
        baseGoals = 0;
    }

    return baseGoals;
}

int main() {
    // Seed the random number generator so numbers change every run
    srand(time(0));

    struct Team teamA;
    struct Team teamB;

    // 3. Get Input for Team A
    printf("--- Enter Team A Details ---\n");
    printf("Team Name: ");
    scanf(" %[^\n]", teamA.name); // Reads string with spaces
    printf("Attack Rating (1-100): ");
    scanf("%d", &teamA.attack);
    printf("Defense Rating (1-100): ");
    scanf("%d", &teamA.defense);

    // 4. Get Input for Team B
    printf("\n--- Enter Team B Details ---\n");
    printf("Team Name: ");
    scanf(" %[^\n]", teamB.name);
    printf("Attack Rating (1-100): ");
    scanf("%d", &teamB.attack);
    printf("Defense Rating (1-100): ");
    scanf("%d", &teamB.defense);

    // 5. Simulate the Match
    int goalsA = calculateGoals(teamA.attack, teamB.defense);
    int goalsB = calculateGoals(teamB.attack, teamA.defense);

    // 6. Print the Results
    printf("\n==============================\n");
    printf("       MATCH RESULT\n");
    printf("==============================\n");
    printf("%s %d - %d %s\n", teamA.name, goalsA, goalsB, teamB.name);
    
    // 7. Determine the Winner
    if (goalsA > goalsB) {
        printf("\n🏆 %s WINS!\n", teamA.name);
    } else if (goalsB > goalsA) {
        printf("\n🏆 %s WINS!\n", teamB.name);
    } else {
        printf("\n🤝 IT'S A DRAW!\n");
    }

    return 0;
}