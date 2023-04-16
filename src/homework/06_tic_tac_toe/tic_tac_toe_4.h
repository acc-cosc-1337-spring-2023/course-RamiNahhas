
#include"tic_tac_toe.h"
using std::string, std::vector;
using namespace std;

#ifndef TICTACTOE4_H
#define TICTACTOE4_H

class TicTacToe_4: public TicTacToe
{


public:
TicTacToe_4():TicTacToe(4){}  
private:
bool check_row_win();  
bool check_col_win();   
bool check_diag_win();   
};

#endif