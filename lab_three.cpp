#include "labs.hpp"
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

static int get_pollution_level(int counter) {
  cout << "Enter pollution level for day " << counter << " range (1-100): ";
  int pollution_level;
  cin >> pollution_level;
  return pollution_level;
}

static void exercise_one() {
  int pollution_levels[10]{};
  int sum = 0;
  int counter = 1;

  while (counter <= 10) {
    int pollution_level = get_pollution_level(counter);
    if (pollution_level < 1 || pollution_level > 100) {
      cout << "Invalid pollution level, re-enter the pollution level!\n";
      int pollution_level = get_pollution_level(counter);
    }
    pollution_levels[counter - 1] = pollution_level;
    sum += pollution_level;
    counter++;
  }
  cout << endl;
  cout << "The average pollution level over those 10 days was:" << sum / 10
       << endl;
}

static void exercise_two() {
  float float_numbers[]{2.6,  3.4,  5.7,   1.855, 10.7,   20.4, 4.621,
                        7.86, 10.7, 20.56, 13.23, 11.653, 6.48};
  float total = 0;
  float min_number = float_numbers[0];
  float max_number = float_numbers[0];
  for (auto n : float_numbers) {
    total += n;
    if (n > max_number) {
      max_number = n;
    }
    if (n < min_number) {
      min_number = n;
    }
  }
  cout << "Total of the values: " << total << endl;
  cout << "Mean average of the values: " << total / size(float_numbers) << endl;
  cout << "Mean average of the values: " << total / size(float_numbers) << endl;
  cout << "Max of the values: " << min_number << endl;
  cout << "Min of the values: " << max_number << endl;
  for (int i = 1; i < size(float_numbers); i++) {
    for (int j = i + 1; j < size(float_numbers); j++) {
      if (float_numbers[i] >= float_numbers[j]) {
        swap(float_numbers[i], float_numbers[j]);
      }
    }
  }
  cout << "Median of the values: " << float_numbers[6] << endl;
  float number = float_numbers[0];
  float mode = number;
  int count = 1;
  int count_mode = 1;

  for (int i = 1; i < sizeof(float_numbers) / sizeof(float_numbers[0]); i++) {
    if (float_numbers[i] == number) {
      ++count;
    } else {
      if (count > count_mode) {
        count_mode = count;
        mode = number;
      }
      count = 1;
      number = float_numbers[i];
    }
  }
  if (count_mode == 1) {
    cout << "There is no mode value of this array\n";
  } else {
    cout << "Mode of the values: " << mode << endl;
  }
}

static void limit(int int_array[], int array_length, int limiting_value) {
  for (int i = 0; i < array_length; i++) {
    if (int_array[i] > limiting_value) {
      int_array[i] = limiting_value;
    }
  }
}

static void display_big(int int_array[], int array_length, int limiting_value) {
  for (int i = 0; i < array_length; i++) {
    if (int_array[i] > limiting_value) {
      cout << int_array[i] << "\t";
    }
  }
  cout << endl;
}

static void exercise_three() {
  int int_array[10]{};
  for (int i = 0; i < size(int_array); i++) {
    int_array[i] = rand() % 51;
  }
  for (auto n : int_array) {
    cout << n << "\t";
  }
  cout << endl;
  limit(int_array, 10, 40);
  for (auto n : int_array) {
    cout << n << "\t";
  }
  cout << endl;
  for (int i = 0; i < size(int_array); i++) {
    int_array[i] = rand() % 51;
  }
  display_big(int_array, 10, 40);
  limit(int_array, 10, 40);
  display_big(int_array, 10, 40);
}

struct Pet {
  string name;
  int age;
  int type;
};

static void exercise_four() {
  Pet my_pet;
  cout << "What is the name of your pet? ";
  cin >> my_pet.name;
  cout << "What is the age of your pet? ";
  cin >> my_pet.age;
  cout << "What is the type of your pet (1: Cat, 2: Dog, 3: Bird)? ";
  cin >> my_pet.type;
  string pet_types[]{"Cat", "Dog", "Bird"};
  cout << "Your " << pet_types[my_pet.type - 1] << " is called " << my_pet.name
       << " and is " << my_pet.age << " years old\n";
}

static void role_the_dices() {
  int result[6][6]{};
  int dice_one, dice_two;
  cout << "Roll the dices 100 times\n";
  for (int i = 0; i < 100; i++) {
    dice_one = rand() % 6 + 1;
    dice_two = rand() % 6 + 1;
    result[dice_one - 1][dice_two - 1]++;
  }
  cout << "  1 2 3 4 5 6\n";
  for (int i = 0; i < 6; i++) {
    cout << i;
    for (int j = 0; j < 6; j++) {
      cout << " " << result[i][j];
    }
    cout << endl;
  }
}

void lab_three() {
  // exercise_one();
  exercise_two();
  // exercise_three();
  // exercise_four();
  role_the_dices();
}
