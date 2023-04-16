#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::string, std::vector, std::cin, std::cout;
using namespace std;



void TicTacToeManager:: save_game(unique_ptr<TicTacToe>&game)
{
update_winner_count(game->get_winner());
games.push_back(std::move(game));
get_winner_total(x_win,o_win,ties);
}

void TicTacToeManager::update_winner_count(string winner)
{ 
    if (winner =="X")
     {x_win+=1; }
            if (winner =="O")
            {o_win+=1; }
                if(winner ==" ")
                {ties+=1; }
}

void TicTacToeManager::get_winner_total(int &x,int &o, int &t)
{
x=x_win;
o=o_win;
t=ties;

}
