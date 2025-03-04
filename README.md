# Maze Game - C++ Console Application

## Overview

The **Maze Game** is a **C++ console-based adventure game** where the player navigates a **randomly generated maze** using the keyboard. The objective is to **reach the prize (****`*`****) while avoiding walls (****`#`****)**.

## Features

- **Randomly Generated 20x30 Maze**.
- **Arrow Key Controls** (`← ↑ → ↓`) for movement.
- **Real-time Player Position Updates**.
- **Winning Condition**: Reach the goal (`*`).

## Installation

### **1. Clone the Repository**

```bash
git clone https://github.com/yourusername/Maze-Game.git
cd Maze-Game
```

### **2. Compile the Game**

Using **g++ (GCC Compiler)**:

```bash
g++ maze_game.cpp -o maze_game.exe
```

Or, using **Visual Studio (MSVC)**:

```bash
cl maze_game.cpp /EHsc
```

## Running the Game

```bash
./maze_game.exe
```

## How to Play

1. **Player starts at (1,1) (****`O`****)**.
2. **Move using arrow keys (****`← ↑ → ↓`****)**.
3. **Avoid walls (****`#`****)**.
4. **Reach the prize (****`*`****)** to win the game.

## Example Gameplay

```
##############################
#O      #        #           #
#  ######  #######  ######## #
#           #     #         #
#####  #########  ######### #
#       #        #         #
##############################
```

- The **player (****`O`****) moves through the maze**.
- The **goal (****`*`****) is at the bottom right**.
- **Walls (****`#`****) block movement**.

## Future Enhancements

- **Dynamic Maze Generation** to create new challenges every run.
- **Multiple Difficulty Levels** (e.g., larger maps, AI obstacles).
- **Multiplayer Mode** (race against another player to the goal).

## License

This project is licensed under the **MIT License**.

## Contributions

Contributions are welcome! To contribute:

1. Fork the repository.
2. Create a new branch (`feature-new-feature`).
3. Commit and push your changes.
4. Open a pull request.

## Contact

For any questions or support, please open an issue on GitHub.

