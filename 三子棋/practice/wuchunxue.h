#define _CRT_SECURE_NO_WARNINGS 1
#define hang 3
#define lie 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu();
void initboard(char board[hang][lie],int han, int li);
void displayboard(char board[hang][lie],int han,int li);
void playermove(char board[hang][lie], int han, int li);
void computemove(char board[hang][lie], int han, int li);
char iswin(char board[hang][lie], int han, int li);
int isfull(char board[hang][lie], int han, int li);