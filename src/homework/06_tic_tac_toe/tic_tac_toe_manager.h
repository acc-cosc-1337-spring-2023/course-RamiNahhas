#ifndef TICTACTOE_MANAGER_H
#define TICTACTOE_MANAGER_H

#pragma once
#include "tic_tac_toe.h"
#include <vector>
#include <iostream>
#include <memory>


class TicTacToeManager 
{
public:
    TicTacToeManager() = default;
    void save_game(std::unique_ptr<TicTacToe>& game);
    void get_winner_total(int& x, int& o, int& t);
    friend std::ostream& operator<<(std::ostream& os, const TicTacToeManager& manager);
private:
    std::vector<std::unique_ptr<TicTacToe>> games;
    int x_win{0};
    int o_win{0};
    int ties{0};
    void update_winner_count(string winner);
};

#endif