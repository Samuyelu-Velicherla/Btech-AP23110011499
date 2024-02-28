#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define N 4

typedef struct 
{
    int board[N][N];
    int queenRow; 
    int queenCol; 
} Board;

bool isSafe(int board[N][N], int row, int col) 
{
    int i, j;
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;
    return true;
}

void printBoard(int board[N][N]) 
{
    int i,j;
    for (i = 0; i < N; i++) 
    {
        for (j = 0; j < N; j++)
            printf("%d ", board[i][j]);
        printf("\n");
    }
    printf("\n");
}

void solveNQueens() 
{
    int i,j;
    Board initialBoard;
    for ( i = 0; i < N; i++)
        for ( j = 0; j < N; j++)
            initialBoard.board[i][j] = 0;
    initialBoard.queenRow = -1;
    initialBoard.queenCol = -1;

    Board *queue = (Board *)malloc(N * N * sizeof(Board));
    int front = -1, rear = -1;

    queue[++rear] = initialBoard;

    while (front != rear) 
    {
        Board currentBoard = queue[++front];

        if (currentBoard.queenCol == N - 1) {
            printBoard(currentBoard.board);
            continue;
        }
        int i;

        for ( i = 0; i < N; i++) 
        {
            if (isSafe(currentBoard.board, i, currentBoard.queenCol + 1)) 
            {
                Board newBoard = currentBoard;
                newBoard.board[i][currentBoard.queenCol + 1] = 1;
                newBoard.queenRow = i;
                newBoard.queenCol = currentBoard.queenCol + 1;
                queue[++rear] = newBoard;
            }
        }
    }

    free(queue);
}

int main() 
{
    printf("Solutions to the 4-Queens Problem:\n");
    solveNQueens();
    return 0;
}

