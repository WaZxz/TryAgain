#define __GAME_H__
#define ROW 3
#define COL 3

void InitBoard(char boar[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void HumanMove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
char Judge(char board[ROW][COL], int row, int col);
int Full(char board[ROW][COL], int row, int col);