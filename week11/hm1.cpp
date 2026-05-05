#include <iostream>
using namespace std;

const int rows = 20;
const int cols = 40;

char board[rows][cols];

int playerX = 18;
int playerY = 20;

int bulletX = -1;
int bulletY = -1;
bool bulletActive = false;

void createBoard()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
            {
                board[i][j] = '#';
            }
            else
            {
                board[i][j] = ' ';
            }
        }
    }

    // Obstacles
    board[5][10] = 'x';
    board[7][25] = 'x';
    board[10][15] = 'x';

    // Enemies
    board[3][12] = 'e';
    board[6][30] = 'e';

    // Player
    board[playerX][playerY] = 'P';
}

void printBoard()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
}

void movePlayerLeft()
{
    if (board[playerX][playerY - 1] == ' ')
    {
        board[playerX][playerY] = ' ';
        playerY--;
        board[playerX][playerY] = 'P';
    }
}

void movePlayerRight()
{
    if (board[playerX][playerY + 1] == ' ')
    {
        board[playerX][playerY] = ' ';
        playerY++;
        board[playerX][playerY] = 'P';
    }
}

void fire()
{
    if (!bulletActive)
    {
        bulletX = playerX - 1;
        bulletY = playerY;

        bulletActive = true;

        board[bulletX][bulletY] = '.';
    }
}

void moveFire(int timeStep)
{
    if (bulletActive)
    {
        board[bulletX][bulletY] = ' ';

        bulletX--;

        if (board[bulletX][bulletY] == 'e')
        {
            board[bulletX][bulletY] = ' ';
            bulletActive = false;
        }
        else if (board[bulletX][bulletY] == '#')
        {
            bulletActive = false;
        }
        else
        {
            board[bulletX][bulletY] = '.';
        }
    }
}

void moveEnemy(char object, string direction)
{
    static int enemyX = 3;
    static int enemyY = 12;

    board[enemyX][enemyY] = ' ';

    if (direction == "right")
    {
        enemyY++;
    }
    else if (direction == "left")
    {
        enemyY--;
    }

    board[enemyX][enemyY] = object;
}

int main()
{
    createBoard();

    char choice;

    while (true)
    {
        printBoard();

        cout << endl;
        cout << "Press a=Left  d=Right  f=Fire  q=Quit : ";
        cin >> choice;

        if (choice == 'a')
        {
            movePlayerLeft();
        }
        else if (choice == 'd')
        {
            movePlayerRight();
        }
        else if (choice == 'f')
        {
            fire();
        }
        else if (choice == 'q')
        {
            break;
        }

        moveFire(1);
    }

    return 0;
}