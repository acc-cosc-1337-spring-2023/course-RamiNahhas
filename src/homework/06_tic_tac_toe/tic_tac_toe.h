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

    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board() const;
    bool game_over();
    void restart_game();

private:

    string player;
    vector<string> pegs{9, " "};
    bool check_board_full();
    void set_next_player();
    void clear_board();
};

#endif