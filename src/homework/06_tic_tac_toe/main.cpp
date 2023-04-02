#include "tic_tac_toe.h"

int main() 
{
	 string play_again = "Y";

    while (play_again == "Y" || play_again == "y") 
	{
        TicTacToe game;
        string player = "";
        int position = 0;

        cout << "Enter the starting player (X or O): ";
        cin >> player;
        game.start_game(player);

        while (!game.game_over()) 
		{
            cout << "Player " << game.get_player() << ", enter a position (1-9): ";
            cin >> position;
            game.mark_board(position);
            game.display_board();
        }

        cout << "Game over. ";
        if (game.get_winner() == "C") 
		{
            cout << "It's a tie!\n";
        } else {
            cout << "Player " << game.get_winner() << " wins!\n";
        }

        cout << "Play again? (Y/N): ";
        cin >> play_again;
    }

   
	return 0;
}