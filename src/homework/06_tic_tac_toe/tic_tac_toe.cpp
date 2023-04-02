 #include "tic_tac_toe.h"

 

TicTacToe::TicTacToe() : player("X"), winner("C")
{
    clear_board();
}

void display_board() const
{
    std::cout << "\n";
    for (int i = 0; i < 9; i++)
    {
        std::cout << pegs[i];
        if ((i + 1) % 3 == 0)
        {
            std::cout << "\n";
        }
    }
    std::cout << "\n";
}

void mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

void start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

bool game_over()
{
    if (check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if (check_board_full())
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
}

string get_winner() const
{
    return winner;
}

bool check_column_win()
{
    for (int i = 0; i < 3; i++)
    {
        if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] && pegs[i] != " ")
        {
            return true;
        }
    }
    return false;
}

bool check_row_win()
{
    for (int i = 0; i < 9; i += 3)
    {
        if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] && pegs[i] != " ")
        {
            return true;
        }
    }
    return false;
}

bool check_diagonal_win()
{
    if ((pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " ") ||
        (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " "))
    {
        return true;
    }
    return false;
}

bool check_board_full()
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

void clear_board()
{
    pegs = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
}

void set_next_player()
{
    if (player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

void set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

string get_player() const
{
    return player;
}