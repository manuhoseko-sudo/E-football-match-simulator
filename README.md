# eFootball Match Simulator (C)

A simple C program that simulates a football match between two teams based on their attack and defense ratings.

## Features
*   Takes team names and ratings (1-100) as input.
*   Generates a realistic scoreline using random number generation.
*   Adjusts goal probability based on the difference between attack and defense ratings.
*   Declares the winner or a draw.

## How to Compile and Run
To compile and run this program, you will need a C compiler (like GCC).

1. Compile the code:
   `gcc match_simulator.c -o match`

2. Run the program:
   `./match`

## Example Output
```text
--- Enter Team A Details ---
Team Name: Manchester United
Attack Rating (1-100): 85
Defense Rating (1-100): 80

--- Enter Team B Details ---
Team Name: Liverpool
Attack Rating (1-100): 88
Defense Rating (1-100): 82

==============================
       MATCH RESULT
==============================
Manchester United 2 - 1 Liverpool

🏆 Manchester United WINS!
