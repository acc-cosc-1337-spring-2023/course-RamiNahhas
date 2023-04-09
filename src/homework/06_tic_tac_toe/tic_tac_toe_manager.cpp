#include "tic_tac_toe_manager.h"


void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for (auto game : manager.games)
    {
        out << game << "\n";
    }
    out << "X wins: " << manager.x_win << "\n";
    out << "O wins: " << manager.o_win << "\n";
    out << "Ties: " << manager.ties << "\n";
    return out;
}

void TicTacToeManager::get_winner_total(int& o, int& w, int& t) {
    o = o_win;
    w = x_win;
    t = ties;

    o_win = 0;
    x_win = 0;
    ties = 0;

    for (const auto& game : games)
    {
        update_winner_count(game.get_winner());
    }
}

void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "X") 
    {
        x_win++;
    }
    else if (winner == "O") 
    {
        o_win++;
    }
    else 
    {
        ties++;
    }
}