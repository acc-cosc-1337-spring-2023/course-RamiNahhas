
#include"tic_tac_toe.h"



ostream& operator<<(ostream& out, TicTacToe& game) 
{
if(game.pegs.size()==16)
{
 int i;
  cout<<"|";  
    for(i=0;i<4;i++)
    {
    cout<<game.pegs[i]<<"|";
    }
    cout<<endl;
    cout<<"|";
        for(i=4;i<8;i++)
        {
        cout<< game.pegs[i] <<"|";
        }
        cout << endl;
        cout << "|";
            for(i=8; i<12; i++)
            {
            cout<<game.pegs[i]<<"|";
            }
            cout<<endl; 
            cout<<"|";
                for(i=12;i<16;i++)
                {
                cout<<game.pegs[i]<<"|";
                }
                cout<<endl; 
    return out;
}
if(game.pegs.size()==9)
{
int i;
  cout<<"|";  
    for(i=0;i<3;i++)
    {
    cout<<game.pegs[i]<<"|";
    }
    cout<<endl;
    cout<<"|";
        for(i=3;i<6;i++)
        {
        cout<<game.pegs[i]<<"|";
        }
        cout<<endl;
        cout<<"|";
            for(i=6;i<9;i++)
            {
            cout<<game.pegs[i]<<"|";
            }
            cout<<endl; 
    
    return out;
}
return out;
}

istream &operator>>(istream &in, TicTacToe &game)
{
return in;
}


bool TicTacToe::game_over()
{

bool win_row =check_row_win();
    if (win_row ==true)
    {
      set_winner();
      return true;  
    }
bool win_col =check_col_win();
    if (win_col ==true)
    {
      set_winner();
      return true;
    }
bool win_diag =check_diag_win();
    if (win_diag ==true)
    {
      set_winner();
      return true;  
    }

if(check_board_full()==true)
{
winner = "C";
cout<<"Game Tied"<<endl;
cout<<"No winner(X or O), the value stored in Winner = "<<winner<<endl;
winner =" ";   
return true;  
}
return false;
}

void TicTacToe::start_game(string first_player)
{
player=first_player;
clear_board();
}

void TicTacToe::mark_board(int position)
{
pegs[position -1] = player;
set_next_player();
}

bool TicTacToe::check_row_win()
{
return false;
}

bool TicTacToe::check_col_win()
{
return false;
}

bool TicTacToe::check_diag_win()
{
return false;
}



void TicTacToe::set_winner()
{
    if (player=="X")
    {player="O";}
        else
        {player="X";}
winner=player;
}

string TicTacToe::get_winner()
{
 return winner;
}


string TicTacToe::get_player()
{
return player;
}


void TicTacToe::set_next_player()
{
    if (player=="X")
    {player="O";}
        else
        {player="X";}
}

bool TicTacToe::check_board_full() 
{
bool full_board = true;
for(string& peg: pegs) 
{
  if(peg == " ") 
  {
  full_board = false;
  return full_board;
  }
}
return full_board;
}

void TicTacToe::clear_board()
{
for(string& peg: pegs) 
{
peg = " ";
}
}