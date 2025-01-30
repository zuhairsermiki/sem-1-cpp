#include <iostream>
using namespace std;

// Function to display the board
void displayBoard(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if there's a winner
bool checkWinner(char board[3][3], char player)
{
    // Check rows and columns
    for (int i = 0; i < 3; i++)
    {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
        {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
    {
        return true;
    }
    return false;
}

int main()
{
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}};

    int moves = 0;
    char currentPlayer = 'X';

    while (true)
    {
        displayBoard(board);

        // Input move
        cout << "Player " << currentPlayer << ", enter your move (1-9): ";
        int move;
        cin >> move;

        // Validate input
        if (move < 1 || move > 9)
        {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        int row = (move - 1) / 3;
        int col = (move - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O')
        {
            cout << "Spot already taken. Try again.\n";
            continue;
        }

        // Make the move
        board[row][col] = currentPlayer;
        moves++;

        // Check for a winner
        if (checkWinner(board, currentPlayer))
        {
            displayBoard(board);
            cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        // Check for a draw
        if (moves == 9)
        {
            displayBoard(board);
            cout << "It's a draw!\n";
            break;
        }

        // Switch player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

 return 0;
}