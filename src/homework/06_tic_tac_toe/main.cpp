#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include <memory>

using std:: unique_ptr;
using std::make_unique;

int main() {
    std::unique_ptr<TicTacToeManager> manager = std::make_unique<TicTacToeManager>();
    string player;
    int size;
    int choice;
    bool loop = true;
    while (loop) {
        cout << "Welcome to Tic-Tac-Toe!\n";
        cout << "Choose the game mode:\n";
        cout << "1. Classic 3x3\n";
        cout << "2. Large 4x4\n";
        cout << "3. Quit\n";
        cin >> choice;
        switch (choice) {
            case 1: {
                std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe>();
                cout << "Enter the first player: ";
                cin >> player;
                game->start_game(player);
                while (!game->game_over()) {
                    cout << *game;
                    cin >> *game;
                    manager->save_game(game);
                }
                cout << *game;
                manager->save_game(game);
                cout << "Game Over! Winner: " << game->get_winner() << "\n";
                break;
            }
            case 2: {
                std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
                cout << "Enter the first player: ";
                cin >> player;
                game->start_game(player);
                while (!game->game_over()) {
                    cout << *game;
                    cin >> *game;
                    manager->save_game(game);
                }
                cout << *game;
                manager->save_game(game);
                cout << "Game Over! Winner: " << game->get_winner() << "\n";
                break;
            }
            case 3:
                loop = false;
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid choice.\n";
                break;
        }
        int x, o, t;
        manager->get_winner_total(x, o, t);
        cout << "X wins: " << x << "\n";
        cout << "O wins: " << o << "\n";
        cout << "Ties: " << t << "\n";
    }
    return 0;
}





