#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstring>
#include <memory>
using std::string, std::vector, std::cin, std::cout;
using namespace std;
using std::unique_ptr;
using std::make_unique;

#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification")
{
	REQUIRE(true == true);
}

TEST_CASE("Tests correct win total history(TicTacToe_3) using manage.game winner totals")
 {
	TicTacToeManager manage;
	int x = 0;
	int o = 0;
	int t = 0;
	//class TicTacToe_3 

	unique_ptr<TicTacToe> ticTacToe_pt= make_unique<TicTacToe_3>();
	
	bool check;
	
	//game1 X wins
	//TicTacToe_3 game;
	//x_o="X";
	ticTacToe_pt->start_game("X");
	ticTacToe_pt->mark_board(1);
	ticTacToe_pt->mark_board(2);
	ticTacToe_pt->mark_board(5);
	ticTacToe_pt->mark_board(4);
	ticTacToe_pt->mark_board(9);

    //game2 O wins
	//string x_o="O";
	ticTacToe_pt->start_game("O");
	ticTacToe_pt->mark_board(1);
	ticTacToe_pt->mark_board(2);
	ticTacToe_pt->mark_board(5);
	ticTacToe_pt->mark_board(4);
	ticTacToe_pt->mark_board(9);

	//game3 tie using X
	ticTacToe_pt->start_game("X");
	ticTacToe_pt->mark_board(1);
	ticTacToe_pt->mark_board(2);
	ticTacToe_pt->mark_board(3);
	ticTacToe_pt->mark_board(4);
	ticTacToe_pt->mark_board(6);
	ticTacToe_pt->mark_board(7);
	ticTacToe_pt->mark_board(8);
	ticTacToe_pt->mark_board(9);
	ticTacToe_pt->mark_board(5);
manage.save_game(ticTacToe_pt);
manage.get_winner_total(x,o,t);
if((x =1) && (o=1)&&(t=1))
{check =true;}
	REQUIRE(check == true);
 }

 TEST_CASE("Tests correct win total history(TicTacToe_4) using manage.game winner totals")
 {
	TicTacToeManager manage;
	int x;
	int o;
	int t;
	//class TicTacToe_4 

	unique_ptr<TicTacToe> ticTacToe_pt= make_unique<TicTacToe_4>();
	
	bool check;
	
	//game1 X wins
	ticTacToe_pt->start_game("X");
	ticTacToe_pt->mark_board(1);
	ticTacToe_pt->mark_board(2);
	ticTacToe_pt->mark_board(5);
	ticTacToe_pt->mark_board(3);
	ticTacToe_pt->mark_board(9);
	ticTacToe_pt->mark_board(4);
	ticTacToe_pt->mark_board(13);

    //game2 O wins
	ticTacToe_pt->start_game("O");
	ticTacToe_pt->mark_board(1);
	ticTacToe_pt->mark_board(2);
	ticTacToe_pt->mark_board(5);
	ticTacToe_pt->mark_board(3);
	ticTacToe_pt->mark_board(9);
	ticTacToe_pt->mark_board(4);
	ticTacToe_pt->mark_board(13);

	//game3 tie using X
	ticTacToe_pt->start_game("X");
	ticTacToe_pt->mark_board(1);
	ticTacToe_pt->mark_board(2);
	ticTacToe_pt->mark_board(5);
	ticTacToe_pt->mark_board(3);
	ticTacToe_pt->mark_board(9);
	ticTacToe_pt->mark_board(4);
	ticTacToe_pt->mark_board(7);
	ticTacToe_pt->mark_board(6);
	ticTacToe_pt->mark_board(10);
	ticTacToe_pt->mark_board(11);
	ticTacToe_pt->mark_board(8);
	ticTacToe_pt->mark_board(12);
	ticTacToe_pt->mark_board(14);
	ticTacToe_pt->mark_board(13);
	ticTacToe_pt->mark_board(15);
	ticTacToe_pt->mark_board(16);
manage.save_game(ticTacToe_pt);
manage.get_winner_total(x,o,t);
if((x =1) && (o=1)&&(t=1))
{check =true;}
	
	REQUIRE(check == true);
 }

TEST_CASE("Tests correct win total history using TicTacToe3 class only")
 {
	bool check;
	int x_win_test= 0;
	int o_win_test=0;
	int ties_test=0;
	string x_o;
	
	//game1 X wins
	TicTacToe_3 game;
	x_o="X";
	game.start_game(x_o);
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(4);
	game.mark_board(9);

	if(game.get_winner() =="X")
	{x_win_test= x_win_test+1;}
		if(game.get_winner() =="O")
		{o_win_test= o_win_test+1;}
		if(game.get_winner() =="C")
			{ties_test= ties_test+1;}
    //game2 O wins
	x_o="O";
	game.start_game("O");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(4);
	game.mark_board(9);

if(game.get_winner() =="X")
	{x_win_test= x_win_test+1;}
		if(game.get_winner() =="O")
		{o_win_test= o_win_test+1;}
		if(game.get_winner() =="C")
			{ties_test= ties_test+1;}

	//game3 tie
	x_o="X";

	game.start_game(x_o);
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(3);
	game.mark_board(4);
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(8);
	game.mark_board(9);
	game.mark_board(5);

if(game.get_winner() =="X")
	{x_win_test= x_win_test+1;}
		if(game.get_winner() =="O")
		{o_win_test= o_win_test+1;}
		if(game.get_winner() =="C")
			{ties_test= ties_test+1;}

	if((x_win_test =1) && (o_win_test=1)&&(ties_test=1))
	{check =true;}

	REQUIRE(check == true);
 }

TEST_CASE("Tests first player is set to  X using TicTacToe3 class only")
 {
	TicTacToe_3 game;
	string player = "X";
	game.start_game(player);
	REQUIRE(game.get_player() == "X");
 }
TEST_CASE("Tests first player is set to O using TicTacToe3 class only")
 {
	TicTacToe_3 game;
	string player = "O";
	game.start_game(player);
	REQUIRE(game.get_player() == "O");

 }
TEST_CASE("Test X win with 5 board marks using TicTacToe3 class only")
 {
	TicTacToe_3 game;
	string player = "X";
	bool x_win = false;
	game.start_game(player);

	game.mark_board(1);
	game.game_over();
	if(game.get_winner() =="X")
	{x_win=true;}
	REQUIRE(x_win == false);

	game.mark_board(2);
	game.game_over();
	if(game.get_winner() =="X")
	{x_win=true;}
	REQUIRE(x_win == false);

	game.mark_board(5);
	game.game_over();
	if(game.get_winner() =="X")
	{x_win=true;}
	REQUIRE(x_win == false);

	game.mark_board(4);
	game.game_over();
	if(game.get_winner() =="X")
	{x_win=true;}
	REQUIRE(x_win == false);

	game.mark_board(9);
	game.game_over();
	if(game.get_winner() =="X")
	{x_win=true;}
	REQUIRE(x_win == true);
 }

TEST_CASE("Test O win with 5 board marks using TicTacToe3 class only")
 {
	TicTacToe_3 game;
	string player = "O";
	bool o_win = false;
	game.start_game(player);

	game.mark_board(1);
	game.game_over();
	if(game.get_winner() =="O")
	{o_win=true;}
	REQUIRE(o_win == false);

	game.mark_board(2);
	game.game_over();
	if(game.get_winner() =="O")
	{o_win=true;}
	REQUIRE(o_win == false);

	game.mark_board(5);
	game.game_over();
	if(game.get_winner() =="O")
	{o_win=true;}
	REQUIRE(o_win == false);

	game.mark_board(4);
	game.game_over();
	if(game.get_winner() =="O")
	{o_win=true;}
	REQUIRE(o_win == false);

	game.mark_board(9);
	game.game_over();
	if(game.get_winner() =="O")
	{o_win=true;}
	REQUIRE(o_win == true);
 }

TEST_CASE("Test Tie with 9 board marks using TicTacToe3 class only")
 {
	TicTacToe_3 game;
	string player = "X";
	bool tie = false;
	game.start_game(player);

	game.mark_board(1);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(2);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(3);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(4);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(6);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(7);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(8);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(9);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(5);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == true);
} 

TEST_CASE ("Test win by 1st column with Game Over function using TicTacToe3 class only")
 {
	TicTacToe_3 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);	

	game.mark_board(7);
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by 2nd column with Game Over function using TicTacToe3 class only")
 {
	TicTacToe_3 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);	

	game.mark_board(8);
	REQUIRE(game.game_over() == true);
		
 }
 TEST_CASE("Test win by 3rd column with Game Over function using TicTacToe3 class only")
 {
	TicTacToe_3 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);	

	game.mark_board(9);
	REQUIRE(game.game_over() == true);
		
 }
 TEST_CASE("Test win by 1st Row with Game Over function using TicTacToe3 class only")
 {
	TicTacToe_3 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);	

	game.mark_board(3);
	REQUIRE(game.game_over() == true);
		
 }
 TEST_CASE("Test win by 2nd Row with Game Over function using TicTacToe3 class only")
 {
	TicTacToe_3 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);	

	game.mark_board(6);
	REQUIRE(game.game_over() == true);
		
 }
 TEST_CASE("Test win by 3rd Row with Game Over function using TicTacToe3 class only")
 {
	TicTacToe_3 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);	

	game.mark_board(9);
	REQUIRE(game.game_over() == true);
		
 }
 TEST_CASE("Test win diagonally from top left with Game Over function using TicTacToe3 class only")
 {
	TicTacToe_3 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);	

	game.mark_board(9);
	REQUIRE(game.game_over() == true);
		
 }
 TEST_CASE("Test win diagonally from bottom left with Game Over function using TicTacToe3 class only")
 {
	TicTacToe_3 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);	

	game.mark_board(7);
	REQUIRE(game.game_over() == true);
		
 }

 TEST_CASE("Tests correct win total history using TicTacToe4 class only")
 {
	bool check;
	int x_win_test= 0;
	int o_win_test=0;
	int ties_test=0;
	string x_o;
	
	//game1 X wins
	TicTacToe_4 game;
	x_o="X";
	game.start_game(x_o);
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(3);
	game.mark_board(9);
	game.mark_board(4);
	game.mark_board(13);


	if(game.get_winner() =="X")
	{x_win_test= x_win_test+1;}
		if(game.get_winner() =="O")
		{o_win_test= o_win_test+1;}
		if(game.get_winner() =="C")
			{ties_test= ties_test+1;}
    //game2 O wins
	x_o="O";
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(3);
	game.mark_board(9);
	game.mark_board(4);
	game.mark_board(13);

if(game.get_winner() =="X")
	{x_win_test= x_win_test+1;}
		if(game.get_winner() =="O")
		{o_win_test= o_win_test+1;}
		if(game.get_winner() =="C")
			{ties_test= ties_test+1;}

	//game3 tie
	x_o="X";

	game.start_game(x_o);
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(3);
	game.mark_board(9);
	game.mark_board(4);
	game.mark_board(7);
	game.mark_board(6);
	game.mark_board(10);
	game.mark_board(11);
	game.mark_board(8);
	game.mark_board(12);
	game.mark_board(14);
	game.mark_board(13);
	game.mark_board(15);
	game.mark_board(16);

if(game.get_winner() =="X")
	{x_win_test= x_win_test+1;}
		if(game.get_winner() =="O")
		{o_win_test= o_win_test+1;}
		if(game.get_winner() =="C")
			{ties_test= ties_test+1;}

	if((x_win_test =1) && (o_win_test=1)&&(ties_test=1))
	{check =true;}

	REQUIRE(check == true);
 }

TEST_CASE("Tests first player is set to  X in using TicTacToe4 class only")
 {
	TicTacToe_4 game;
	string player = "X";
	game.start_game(player);
	REQUIRE(game.get_player() == "X");
 }
TEST_CASE("Tests first player is set to O using TicTacToe4 class only")
 {
	TicTacToe_4 game;
	string player = "O";
	game.start_game(player);
	REQUIRE(game.get_player() == "O");

 }
TEST_CASE("Test X win with 7 board marks using TicTacToe4 class only")
 {
	TicTacToe_4 game;
	string player = "X";
	bool x_win = false;
	game.start_game(player);

	game.mark_board(1);
	game.game_over();
	if(game.get_winner() =="X")
	{x_win=true;}
	REQUIRE(x_win == false);

	game.mark_board(2);
	game.game_over();
	if(game.get_winner() =="X")
	{x_win=true;}
	REQUIRE(x_win == false);

	game.mark_board(5);
	game.game_over();
	if(game.get_winner() =="X")
	{x_win=true;}
	REQUIRE(x_win == false);

	game.mark_board(3);
	game.game_over();
	if(game.get_winner() =="X")
	{x_win=true;}
	REQUIRE(x_win == false);

	game.mark_board(9);
	game.game_over();
	if(game.get_winner() =="X")
	{x_win=true;}
	REQUIRE(x_win == false);

	game.mark_board(4);
	game.game_over();
	if(game.get_winner() =="X")
	{x_win=true;}
	REQUIRE(x_win == false);

	game.mark_board(13);
	game.game_over();
	if(game.get_winner() =="X")
	{x_win=true;}
	REQUIRE(x_win == true);
 }

TEST_CASE("Test O win with 7 board marks using TicTacToe4 class only")
 {
	TicTacToe_4 game;
	string player = "O";
	bool o_win = false;
	game.start_game(player);

	game.mark_board(1);
	game.game_over();
	if(game.get_winner() =="O")
	{o_win=true;}
	REQUIRE(o_win == false);

	game.mark_board(2);
	game.game_over();
	if(game.get_winner() =="O")
	{o_win=true;}
	REQUIRE(o_win == false);

	game.mark_board(5);
	game.game_over();
	if(game.get_winner() =="O")
	{o_win=true;}
	REQUIRE(o_win == false);

	game.mark_board(3);
	game.game_over();
	if(game.get_winner() =="O")
	{o_win=true;}
	REQUIRE(o_win == false);

	game.mark_board(9);
	game.game_over();
	if(game.get_winner() =="O")
	{o_win=true;}
	REQUIRE(o_win == false);
	
	game.mark_board(4);
	game.game_over();
	if(game.get_winner() =="O")
	{o_win=true;}
	REQUIRE(o_win == false);

	game.mark_board(13);
	game.game_over();
	if(game.get_winner() =="O")
	{o_win=true;}
	REQUIRE(o_win == true);
 }

TEST_CASE("Test Tie with 16 board marks using TicTacToe4 class only ")
 {
	TicTacToe_4 game;
	string player = "X";
	bool tie = false;
	game.start_game(player);

	game.mark_board(1);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(2);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(5);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(3);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(9);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(4);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(7);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(6);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(10);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(11);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(8);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(12);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(14);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(13);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(15);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == false);

	game.mark_board(16);
	game.game_over();
	if(game.get_winner() ==" ")
	{tie=true;}
	REQUIRE(tie == true);

} 

TEST_CASE ("Test win by 1st column with Game Over function using TicTacToe4 class only")
 {
	TicTacToe_4 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);	

	game.mark_board(9);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(13);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test win by 2nd column with Game Over function using TicTacToe4 class only")
 {
	TicTacToe_4 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);	

	game.mark_board(10);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == false);

	game.mark_board(14);
	REQUIRE(game.game_over() == true);	
 }
 
 TEST_CASE("Test win by 3rd column with Game Over function using TicTacToe4 class only")
 {
	TicTacToe_4 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);	

	game.mark_board(11);
	REQUIRE(game.game_over() == false);
		
	game.mark_board(9);
	REQUIRE(game.game_over() == false);

	game.mark_board(15);
	REQUIRE(game.game_over() == true);

 }

 TEST_CASE("Test win by 4th column with Game Over function using TicTacToe4 class only")
 {
	TicTacToe_4 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);	

	game.mark_board(12);
	REQUIRE(game.game_over() == false);
		
	game.mark_board(9);
	REQUIRE(game.game_over() == false);

	game.mark_board(16);
	REQUIRE(game.game_over() == true);
 }
 
 TEST_CASE("Test win by 1st Row with Game Over function using TicTacToe4 class only")
 {
	TicTacToe_4 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);	

	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(4);
	REQUIRE(game.game_over() == true);
		
 }

 TEST_CASE("Test win by 2nd Row with Game Over function using TicTacToe4 class only")
 {
	TicTacToe_4 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);	

	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
		
 }
  
 TEST_CASE("Test win by 3rd Row with Game Over function using TicTacToe4 class only")
 {
	TicTacToe_4 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(10);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);	

	game.mark_board(11);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(12);
	REQUIRE(game.game_over() == true);
		
 }
 
 TEST_CASE("Test win by 4th Row with Game Over function using TicTacToe4 class only")
 {
	TicTacToe_4 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(13);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(14);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);	

	game.mark_board(15);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(16);
	REQUIRE(game.game_over() == true);
 }
 
 TEST_CASE("Test win diagonally from top left with Game Over function using TicTacToe4 class only")
 {
	TicTacToe_4 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);	

	game.mark_board(11);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(16);
	REQUIRE(game.game_over() == true);
 	
 }

 TEST_CASE("Test win diagonally from bottom left with Game Over function using TicTacToe4 class only")
 {
	TicTacToe_4 game;
	string player = "X";
	game.start_game(player);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);	

	game.mark_board(10);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(13);
	REQUIRE(game.game_over() == true);
		
 }