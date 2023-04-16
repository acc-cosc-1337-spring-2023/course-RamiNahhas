
#include"tic_tac_toe.h"

using std::string, std::vector;
using namespace std;

#ifndef TICTACTOE3_H
#define TICTACTOE3_H

class TicTacToe_3: public TicTacToe
{

public:
TicTacToe_3():TicTacToe(3){}  
private:
bool check_row_win();  
bool check_col_win();  
bool check_diag_win();   

};
#endif