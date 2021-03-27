#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define LINE 3
void InitBoard(char board[ ROW][LINE],int row,int line );
void PrintBoard(char board[ROW][LINE], int row, int line);
void PlayerMove(char board[ROW][LINE], int row, int line);
void ComputeMove(char board[ROW][LINE], int row, int line);
char CheckWin(char board[ROW][LINE], int row, int line);