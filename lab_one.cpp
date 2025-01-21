#include "labs.h"
#include <iostream>
using namespace std;

static float a_simple_function(int a, int b, int c, int d, int y)
{
	float x;
	x = y + (static_cast<float>(a) + b) * 2 / (c - d);
	return x;
}

static double bmi(double weight, double height)
{
	return weight / (height * height);
}

void lab_one() {
	int x = 0;
	double y = 42.5;
	bool Answer = false;
	x = x + 19;
	//x = x + 9.5;
	int xx = 100;
	int int_number = 4;
	double float_number = 4.4;

	cout << "The value of x is " << x << endl;
	cout << "This is a section of text." << " And this is another" << endl;
	cout << "The value of y is " << y << endl;
	cout << "The value of Answer is " << Answer << endl;
	cout << "The xalue of xx is " << xx << endl;
	cout << "The result of that given function is: " << a_simple_function(6, 4, 7, 2, 3) << endl;
	cout << int_number + float_number << endl;
	cout << int_number + 4.5 << endl;
	cout << "My BMI value is: " << bmi(47, 1.685) << endl;
}