#include "tic_tac_toe.h"

int main() 
{
	TicTacToe game;
    string player;

    do 
    {
        cout << "Enter X or 0 for the first player: ";
        cin >> player;

        game.start_game(player);

        while (!game.game_over()) 
        {
            cout << "Player " << game.get_player() << ", enter a position (1-9): ";
            int position;
            cin >> position;

            game.mark_board(position);

            game.display_board();
        }

        cout << "Game over!" << "\n";

        cout << "Do you want to play again? (y/n): ";
        char choice;
        cout << "Would you like to play again? (Y/N): ";
        cin >> choice;
    
    if (choice == 'y' || choice == 'Y') 
    {
        game.restart_game();
    }
    } while (player == "y" || player == "Y");

	return 0;
}