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
    TicTacToe() : TicTacToe(3) {}  
    TicTacToe(int size) : pegs(size * size, " ") {}
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board() const;
    string get_winner() const;
    bool game_over();
    int get_board_size() const; 
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);

private:
    string player;
    string winner;
    void set_next_player();
    bool check_board_full() const;
    bool game_over_check();
    void set_winner();

protected:
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();
    void clear_board();
    vector<string> pegs;

};

#endif

