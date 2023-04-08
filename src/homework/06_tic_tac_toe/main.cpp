#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

int main()
{
    TicTacToeManager manager;
    char play_again = 'y';

    while (play_again == 'y')
    {
        TicTacToe game;
        cout << game;

        while (!game.game_over())
        {
            cin >> game;
            cout << game;
        }

        cout << "Game over!\n";

        manager.save_game(game);

        cout << "Would you like to play again? (y/n): ";
        cin >> play_again;
    }

    int x_win, o_win, ties;
    manager.get_winner_total(x_win, o_win, ties);
    cout << "X wins: " << x_win << "\n";
    cout << "O wins: " << o_win << "\n";
    cout << "Ties: " << ties << "\n";

    cout << "Games played: \n";
    cout << manager;

    return 0;
}