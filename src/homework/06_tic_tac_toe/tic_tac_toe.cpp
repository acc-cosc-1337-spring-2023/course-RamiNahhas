 #include "tic_tac_toe.h"
 

    
void TicTacToe::start_game(string first_player) 
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position) 
{
    pegs[position - 1] = player;
    set_next_player();
}

string TicTacToe::get_player() const 
{
    return player;
}

void TicTacToe::display_board() const 
{
    cout << " " << pegs[0] << " | " << pegs[1] << " | " << pegs[2] << " \n";

    cout << "-----------\n";

    cout << " " << pegs[3] << " | " << pegs[4] << " | " << pegs[5] << " \n";

    cout << "-----------\n";

    cout << " " << pegs[6] << " | " << pegs[7] << " | " << pegs[8] << " \n";
}

bool TicTacToe::game_over() 
{
    return check_board_full();
}

void TicTacToe::set_next_player() 
{
    player = (player == "X") ? "O" : "X";
}

bool TicTacToe::check_board_full() 
{
    for (auto peg : pegs) 
    {
        if (peg == " ") 
        {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board() 
{
    for (int i = 0; i < pegs.size(); ++i) 
    {
        pegs[i] = " ";
    }
}

void TicTacToe::restart_game()
{
    clear_board();
    cout << "Enter the first player (X or O): ";
    string first_player;
    cin >> first_player;
    start_game(first_player);
}