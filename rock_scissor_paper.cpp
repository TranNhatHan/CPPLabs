#include <iostream>
#include "labs.h"
using namespace std;

//these constants make reading and writing the code easier and help in avoiding errors
const int SCISSORS = 1;
const int PAPER = 2;
const int STONE = 3;

// String arrays in C++ are declared as 2 dimensional char arrays
// These are here simply to make displaying the results more convenient
// First a 2 element array - each element is itself an array of 10 chars (9 for chars and 1 for the end of string character '\0')
char winlose[2][10] = { "BEATS    " , "LOSES TO " };
// Then a 4 element array. 
// As arrays are zero indexed, and we are using values 1 to 3, I use a blank string for index 0 
// to avoid messing about decrementing values when indexing. Code is therefore easier to read.
// The spaces are for formatting the output. 
char choices[4][10] = { "", "Scissors ", "Paper    ", "Stone    " }; // 4 element array, each element being 10 chars

bool b_beats_a(int a, int b)
{
	return false;
}

void test(int a, int b, int winner)
//function to perform the test and see if the expected winner is correct 
{
	if (winner == a) {
		// if (b_beats_a(a, b)) {
		// 	cout << "FAIL!!! ";
		// }
	}
	//else winner is b
	else if (!b_beats_a(a, b)) {
		// cout << "FAIL!!! ";
	}

	cout << choices[a] << winlose[b_beats_a(a, b)] << choices[b] << endl;


}

void rock_scissor_paper()
{
	int player1 = SCISSORS;
	int player2 = PAPER;
	test(player1, player2, SCISSORS);

	player1 = PAPER;
	player2 = STONE;
	test(player1, player2, PAPER);

	player1 = STONE;
	player2 = SCISSORS;
	test(player1, player2, STONE);

	player1 = PAPER;
	player2 = SCISSORS;
	test(player1, player2, SCISSORS);

	player1 = STONE;
	player2 = PAPER;
	test(player1, player2, PAPER);

	player1 = SCISSORS;
	player2 = STONE;
	test(player1, player2, STONE);

}