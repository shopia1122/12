#define BOARDSTATUS_OK      1
#define BOARDSTATUS_NOK     0
#define N_BOARD             20

void board_printBoardStatus(void);
int board_getBoradStatus(int pos);
int board_getBoardCoin(int pos);
void board_initBoard(void);
