#include "labs.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
// #include <windows.h>
using namespace std;

static void exercise_one() {
	int a_integer = 10;
	if (a_integer < 10) {
		std::cout << "Number is too low\n";
	}
	else if (a_integer > 10) {

		std::cout << "Number is too high\n";
	}
	else {
		std::cout << "Number is perfect\n";
	}
}

static void exercise_two() {
	float a_float = 4.9;
	cout << "Starting value for a_float is " << a_float << endl;
	int b_integer = 0;

	b_integer = a_float / 2;

	if (b_integer == 2) {
		cout << "Result is: " << a_float / 2 << endl;
	}
}

static void exercise_three() {
	int a, b, c, d;
	a = 2;
	b = 4;
	c = 6;
	d = 8;
	if (a == 2 && b < 3) {
		cout << "Test A\n";
	}
	else if (a != 2 && b > 2) {
		cout << "Test B\n";
	}
	else if (c < 7 || d > 9) {
		cout << "Test C\n";
	}
	else if (c >= 6 || d <= 10) {
		cout << "Test D\n";
	}
	else if (a > 4 && d < 9) {
		cout << "Test H\n";
	}
	else {
		cout << "Test failed\n";
	}
}

static float bmi(float weight, float height) {
	return weight / (height * height);
}

static void exercise_four() {
	float height, weight;
	cout << "Please enter height in metres: ";
	cin >> height;
	cout << "Please enter weight in kilogram: ";
	cin >> weight;
	float result = bmi(weight, height);
	if (result < 18.5) {
		cout << "Described as underweight\n";
	}
	else if (result > 18.5 && result < 25) {
		cout << "Described as the healthy range\n";
	} 
	else if (result >= 25 && result < 30) {
		cout << "Described as overweight\n";
	}
	else if (result >= 30 && result < 40) {
		cout << "Described as obesity\n";
	}
	else if (result >= 40) {
		cout << "Sescribed as severe obesity\n";
	}
}

static void exercise_five() {
	int user_number;
	cout << "Please enter a number between 1 and 20: ";
	cin >> user_number;
	srand(time(0));
	int random_number = rand() % 21;
	cout << "Count, random, user\n";
	for (int i = 1; i <= 20; i++) {
		cout << i << "\t";
		if (i == random_number) {
			cout << ".yes...........\n";
		}
		else if (i == user_number) {
			cout << "......yes......\n";
		}
		else if (i == random_number && i == user_number) {
			cout << ".yes..yes......\n";
		}
		else {
			cout << "...............\n";
		}
	}

}

static int take_player_input() {
	cout << "Enter 1 for scissors, 2 for paper, 3 for rock (0 to exit the program): ";
	int input;
	cin >> input;
	if (input < 0 || input > 3) {
		cout << "Invalid input, please try again\n";
		return take_player_input();
	}
	return input;
} 

static void rock_scissors_paper() {
	char choices[4][10] = {"Scissors", "Paper", "Rock"};
	char winlose[2][10] = { "BEATS" , "LOSES TO"};
	while (true) {
		int player_input = take_player_input();
		if (player_input == 0) {
			break;
		}
		player_input--;
		srand(time(0));
		int bot_input = rand() % 3;
		int result = player_input - bot_input;
		cout << "Player chose " << choices[player_input] << endl;
		cout << "Bot chose " << choices[bot_input] << endl;
		switch (result) {
			case 0:
				cout<<"Draw! One more time!\n";
				continue;
			case 1:
			case -2:
				cout << choices[player_input] << " " << winlose[1] << " " << choices[bot_input] << endl;
				cout << "You lose!\n";
				continue;
			default:
				cout << choices[player_input] << " " << winlose[0] << " " << choices[bot_input] << endl;
				cout << "You win!\n";
		}
	}
}

static void homework_one() {
	for (int i = 10; i >= 0; i--) {
		cout<<i<<endl;
		sleep(1);
	}
	cout<<"Thunderbird are go!\n";
}

static void homework_two() {
	float oz;
	cout << "The amount of ounces you would like to convert to grams: ";
	cin >> oz;
	cout << "It is " << oz*28.3495 << " grams\n";
	cout << "This is the conversion table\n";
	cout << "Ounces\t" << "Gram\n";
	for (int i = 1; i <= 10; i++) {
		cout << i << "\t" << i*28.3495 << endl;
	}
}

static void homework_three() {
	float USD_to_GBP_conversion_rate;
	cout << "What is the convesion rate: ";
	cin >> USD_to_GBP_conversion_rate;
	cout << "This is the conversion table\n";
	cout << "USD\t" << "GBP\n"; 
	for (int i = 1; true; i++) {
		if (i*USD_to_GBP_conversion_rate>=10) {
			break;
		}
		cout << i << "\t" << i*USD_to_GBP_conversion_rate << endl;
	}
}

static void homework_four() {
	while (true) {
		int number;
		cout << "Enter a integer number: ";
		cin >> number;
		if (number == 0) {
			break;
		}
		cout << "This is the " << number << " times table\n";
		for (int i = 1; i <= 10; i++) {
			cout << number << " * " << i << " = " << number*i << endl;
		}
	}
	

}

static void homework_five() {
	int age;
	cout << "What is your age: ";
	cin >> age;
	if (age <= 40 && age >= 18) {
		for (int i = 1; i <= 5; i++) {
			cout << "You will be " << age + i*10 << " in the next " << i*10 << " years\n";
		}
	} else {
		cout << "This is not for you!\n";
	}
}

void lab_two() {
	// exercise_one();
	// exercise_two();
	// exercise_three();
	// exercise_four();
	// exercise_five();
	// rock_scissors_paper();
	// homework_one();
	// homework_two();
	// homework_three();
	// homework_four();
	homework_five();
}
