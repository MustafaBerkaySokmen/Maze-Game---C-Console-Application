#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>

using namespace std;

const int ROWS = 20;
const int COLS = 30;

char maze[ROWS][COLS];
int prizeRow, prizeCol, playerRow, playerCol;

void ConsoleApplication2()
{
    // fill the maze with walls
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            maze[i][j] = '#';
        }
    }

    // randomly generate the maze
    srand(time(NULL));
    for (int i = 1; i < ROWS - 1; i += 2)
    {
        for (int j = 1; j < COLS - 1; j += 2)
        {
            maze[i][j] = ' ';

            if (i == 1 && j == 1)
            {
                // place the player in the maze
                maze[i][j] = 'O';
                playerRow = i;
                playerCol = j;
            }
            else if (i == ROWS - 2 && j == COLS - 2)
            {
                // place the prize in the maze
                maze[i][j] = '*';
                prizeRow = i;
                prizeCol = j;
            }
            else if (rand() % 2 == 0)
            {
                // randomly open a path in the maze
                if (rand() % 2 == 0)
                {
                    maze[i][j - 1] = ' ';
                }
                else
                {
                    maze[i - 1][j] = ' ';
                }
            }
            else
            {
                // leave the wall intact
            }
        }
    }
}

void printMaze()
{
    system("cls");  // clear the console
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
}

bool movePlayer(int dx, int dy)
{
    // check if the move is valid
    if (maze[playerRow + dy][playerCol + dx] == '#')
    {
        return false;
    }

    // move the player
    maze[playerRow][playerCol] = ' ';
    playerRow += dy;
    playerCol += dx;
    maze[playerRow][playerCol] = 'O';

    return true;
}


int main()
{
    ConsoleApplication2();
    printMaze();

    // game loop
    while (true)
    {
        // read input
        char c = _getch();
        int dx = 0, dy = 0;
        if (c == 27) // escape key to quit
        {
            break;
        }
        else if (c == 224) // arrow key
        {
            c = _getch();
            switch (c)
            {
            case 72: // up arrow
                dy = -1;
                break;
            case 80: // down arrow
                dy = 1;
                break;
            case 75: // left arrow
                dx = -1;
                break;
            case 77: // right arrow
                dx = 1;
                break;
            }
        }

        // move the player
        if (movePlayer(dx, dy))
        {
            printMaze();

            // check if the player has won
            if (playerRow == prizeRow && playerCol == prizeCol)
            {
                cout << "Great job dude!" << endl;
                break;
            }
        }
    }

    return 0;
}
