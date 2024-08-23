# Rock Paper Scissors Game

This C++ program implements a simple Rock Paper Scissors game where a user plays against the computer.

## Features

- User can choose between Rock (r), Paper (p), or Scissors (s)
- Computer randomly selects its choice
- Game determines the winner based on classic Rock Paper Scissors rules
- Clear screen functionality for better user experience

## How to Play

1. Run the program
2. You will see a menu with options:
   - r for Rock
   - s for Scissors
   - p for Paper
3. Enter your choice (r, s, or p)
4. The program will display both your choice and the computer's choice
5. The winner will be announced based on the game rules

## Code Structure

- `main()`: Main game loop
- `getUserOption()`: Prompts for and validates user input
- `getComputerOption()`: Generates a random choice for the computer
- `conditions()`: Determines the winner based on both choices

## Implementation Details

- Uses C++ standard library
- Utilizes `rand()` for computer's choice, seeded with current time
- Input validation ensures user enters a valid choice
- Clears screen between rounds for cleaner interface

## Game Rules

- Rock beats Scissors
- Scissors beats Paper
- Paper beats Rock
- If both players choose the same, it's a tie

## Note

The `system("CLS")` command is used for clearing the screen, which is Windows-specific. For cross-platform compatibility, consider using alternative methods or a cross-platform library for screen clearing.
