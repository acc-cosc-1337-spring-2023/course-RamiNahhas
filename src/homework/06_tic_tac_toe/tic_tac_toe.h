#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <iostream>
#include <vector>
#include <string>

using std:: string; 
using std:: cin; 
using std:: cout; 
using std:: vector;


class TicTacToe 
{
public:

    TicTacToe(); 
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board() const;
    string get_winner() const;
    bool game_over();
    
private:

    string player;
    vector<string> pegs{9, " "};
    string winner;

    void set_next_player();
    void clear_board();
    bool check_board_full() const;
    bool game_over_check();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();

};

#endif