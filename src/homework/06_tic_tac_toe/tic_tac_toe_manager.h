
#include"tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
using std::string, std::vector;
using namespace std;

#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H

class TicTacToeManager

{
friend ostream& operator<<(ostream& out, TicTacToeManager& manage)
    {
        out<<"-Final Game History Summary-"<<endl;
        for( auto &obj : manage.games)
        {
           out<<*obj<<"\n"; 
        }
        out<<"Game summary win History"<<endl;
        out<<"X wins :>>> "<<manage.x_win<<endl;
        out<<"O wins :>>> "<<manage.o_win<<endl;
        out<<"Ties   :>>> "<<manage.ties<<endl;
        return out;
    }

private:
void update_winner_count(string);
int x_win{};
int o_win{};
int ties{};

vector<unique_ptr<TicTacToe>> games;


public:
void get_winner_total(int &,int &,int &);
void save_game(unique_ptr<TicTacToe>&);


};
#endif