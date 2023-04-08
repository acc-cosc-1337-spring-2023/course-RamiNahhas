#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test game over function")
{
	TicTacToe game;

    game.start_game("X");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(3);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(8);
	game.mark_board(9);
	REQUIRE(game.game_over()== true);
}


TEST_CASE("Test first player set to X")
{
	TicTacToe game;

	game.start_game("X");
	REQUIRE(game.get_player()== "X");
}


TEST_CASE("Test first player set to O")
{
	TicTacToe game;

	game.start_game("O");
	REQUIRE(game.get_player()== "O");

}


TEST_CASE("Test win by first column")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(1); 
	game.mark_board(2); 
	game.mark_board(4); 
	game.mark_board(5); 
	game.mark_board(7);
	REQUIRE(game.game_over()== true);
}

TEST_CASE("Test win by second column")
{
		TicTacToe game;

    game.mark_board(2); 
    game.mark_board(1); 
    game.mark_board(5); 
    game.mark_board(4); 
    game.mark_board(8); 
	REQUIRE(game.game_over()== true);
}

TEST_CASE("Test win by third column")
{
		TicTacToe game;

	game.mark_board(3); 
	game.mark_board(1); 
	game.mark_board(6); 
	game.mark_board(2); 
	game.mark_board(9); 
	REQUIRE(game.game_over()== true);
}

TEST_CASE("Test win by first row")
{
		TicTacToe game;

	game.mark_board(1); 
	game.mark_board(4); 
	game.mark_board(2); 
	game.mark_board(5); 
	game.mark_board(3); 
	REQUIRE(game.game_over()== true);
}

TEST_CASE("Test win by second row")
{
	TicTacToe game;

	game.mark_board(4); 
	game.mark_board(1);
	game.mark_board(5); 
	game.mark_board(2); 
	game.mark_board(6);
	REQUIRE(game.game_over()== true);
}

TEST_CASE("Test win by third row")
{
		TicTacToe game;

    game.mark_board(7); 
    game.mark_board(1); 
    game.mark_board(8); 
    game.mark_board(2); 
    game.mark_board(9); 
	REQUIRE(game.game_over()== true);
}

TEST_CASE("Test win diagonally from top left")
{
		TicTacToe game;
	game.start_game("O");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(3);
	game.mark_board(9);
	REQUIRE(game.game_over()== true);
	REQUIRE(game.get_winner()== "O");

}

TEST_CASE("Test win diagonally from bottom left")
{
		TicTacToe game;

	game.start_game("X");
	game.mark_board(7);
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(2);
	game.mark_board(3);
	REQUIRE(game.game_over()== true);
	REQUIRE(game.get_winner()== "X");

}

TEST_CASE( "Test get winner total tallies correctly")
{
   
    TicTacToeManager manager;


	TicTacToe game2;
	game2.start_game("O");
	game2.mark_board(4);
	game2.mark_board(3);
	game2.mark_board(1);
	game2.mark_board(9);
	game2.mark_board(7);

    TicTacToe game1;
    game1.start_game("X");
	game1.mark_board(1);
	game1.mark_board(2);
	game1.mark_board(5);
	game1.mark_board(3);
	game1.mark_board(9);



    TicTacToe game3;
    game3.start_game("X");
    game3.mark_board(1);
    game3.mark_board(2);
    game3.mark_board(3);
    game3.mark_board(4);
    game3.mark_board(6);
    game3.mark_board(9);
    game3.mark_board(8);
    game3.mark_board(7);
    game3.mark_board(5);


    manager.save_game(game1);
    manager.save_game(game2);
    manager.save_game(game3);

    int o_wins, x_wins, ties;
    manager.get_winner_total(o_wins, x_wins, ties);

    REQUIRE(o_wins == 1);
    REQUIRE(x_wins == 1);
    REQUIRE(ties == 1);

}





