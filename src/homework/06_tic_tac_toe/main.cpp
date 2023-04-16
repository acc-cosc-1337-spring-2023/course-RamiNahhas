#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include<memory>
#include <cstring>
#include <climits>
#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
using std::unique_ptr;
using std::make_unique;
using std::string, std::vector,std::cin, std::cout;
using namespace std;

int main() 
{

unique_ptr <TicTacToe> game;

TicTacToeManager manage;  

bool gover;  
string first_player;
int position; 

char ch; 
gover=false; 

ch = 'Y';
while(ch=='Y'|| ch=='y' ) 
{
int s;

cout<<" Type 3 for a 3 x 3 board, or 4 for a 4 X 4 board \n";
cin>>s;
while (!(cin && (s>2 && s<5)))
{
    cin.clear(); 
    cin.ignore(INT_MAX, '\n'); 
    cout<<"Invalid character entered\n";
    cout<<"Please, Enter a 3 or 4 for board type\n";
    cin>>s;  	
}
if(s == 4)
{
game = make_unique<TicTacToe_4>();			
cout<<"tictactoe 4----"<<endl;
}
else
{
game = make_unique<TicTacToe_3>();
cout<<"tictactoe 3"<<endl;
}
cout<<"Enter a capital X or an capital O for first player"<<endl;
cin>>first_player;
while (((first_player!="X")&&(first_player!="O")) ||(cin.fail()))
{
    cout<<"Invalid character entered\n";
    cout<<"Enter X or O for first player\n";
    cin>>first_player;
}

game->start_game(first_player);	
cout<<"First Player entered was an "<< game->get_player()<<endl;
cout<<*game;  

while(gover==false)
{
cout<<"Enter  position (1 - 9) Player "<<game->get_player()<<endl;
cout<<"Enter  position (1 - 16) Player "<<game->get_player()<<endl;
cout<<"(PROGRAM will EXIT, if any other character is entered)"<<endl;
cin>>position;
if (!(cin && (position>0 && position<17)))
{
return 0;	
}
game->mark_board(position);  
cout<<*game; 

gover = game->game_over();   
}
manage.save_game(game);
int x; int o; int t;
manage.get_winner_total(x,o,t);
cout<<"Winners Tally :: X wins ="<<x<< "  O wins ="<<o << "  Ties ="<<t<<endl;
cout<<"Game Over"<<endl;

cout<<"ENTER Y or y to CONTINUE , or enter any other value to exit"<<endl;
gover=false;
	cin>>ch;
		if (!(ch == 'Y'||ch =='y'))
		{
			cout<<manage;
			return 0;
		}
}
return 0;
}

