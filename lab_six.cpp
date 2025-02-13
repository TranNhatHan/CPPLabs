#include "labs.hpp"
#include <iostream>

using namespace std;

static void question_one() {
	int num = 10;
	int* num_ptr = &num;
	cout << *num_ptr << endl;
}

static void question_two() {
	int arr[] = { 10, 20, 30, 40 };
	int* pointer = &arr[0];
	cout << *pointer << endl;
	pointer++;
	cout << *pointer << endl;
	pointer++;
	cout << *pointer << endl;
	pointer++;
	cout << *pointer << endl;
}

static void question_three() {
	int num = 10;
	int& num_ref = num;
	num_ref++;
	cout << num << endl;
}

static void question_four() {
	int x = 5, y = 10;
	int* x_ptr = &x;
	int* y_ptr = &y;

	int temp = *x_ptr;
	*x_ptr = *y_ptr;
	*y_ptr = temp;
	cout << "x = " << x << ", y = " << y << endl;
}

static void question_five() {
	int* ptr = new int(25);
	cout << *ptr << endl;
	delete ptr;
	//cout << *ptr << endl; //Error
}

static void question_six() {
	struct Student {
		string name;
		int age;
	};
	Student s = { "John", 20 };
	Student* student_ptr = &s;
	cout << "Student name: " << student_ptr->name << endl;
	cout << "Student age: " << student_ptr->age << endl;
}

static void question_seven() {
	int x = 15, y = 25;
	int& x_ref = x;
	int& y_ref = y;
	x_ref = x_ref + y_ref;
	y_ref = x_ref - y_ref;
	x_ref = x_ref - y_ref;
	cout << "x = " << x << ", y = " << y;
}

static void question_eight() {
	int arr[] = { 1, 2, 3, 4, 5 };
	int* arr_ptr = &arr[0];
	for (int i = 0; i < 5; i++) {
		cout << *(arr_ptr+i) << endl;
	}
}

void lab_six() {
	//question_one();
	//question_two();
	//question_three();
	//question_four();
	//question_five();
	//question_six();
	//question_seven();
	question_eight();
}