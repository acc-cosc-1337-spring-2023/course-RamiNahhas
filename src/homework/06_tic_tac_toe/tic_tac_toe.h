#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include <memory>
#include<stdlib.h>
using std::string, std::vector;
using namespace std;

#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe

{
friend ostream &operator<<(ostream &out, TicTacToe &game);

friend istream &operator>>(istream &in, TicTacToe &game);

private:
void set_next_player();
bool check_board_full();
void clear_board();
void set_winner();  
string player;
string winner; 

protected:
vector<string> pegs{};
 virtual bool check_row_win();  
 virtual bool check_col_win();   
 virtual bool check_diag_win();   

public:
int s;
TicTacToe() : pegs(9, " ")  {}
TicTacToe(int size) : pegs(size * size, " ") {}

//TicTacToe(int);
bool game_over();
string get_winner();  
void start_game(string);
void mark_board(int);
string get_player();


};
#endif