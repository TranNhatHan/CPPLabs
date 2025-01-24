#include "labs.hpp"
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <limits> 
#include <cmath>
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
  int highest_mode = 1;

  for (int i = 1; i < sizeof(float_numbers) / sizeof(float_numbers[0]); i++) {
    if (float_numbers[i] == number) {
      ++count;
    } else {
      if (count > highest_mode) {
        highest_mode = count;
        mode = number;
      }
      count = 1;
      number = float_numbers[i];
    }
  }
  if (highest_mode == 1) {
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

struct Size {
  float height;
  float weight;
  float length;
};

struct Pet {
  string name;
  int age;
  int type;
  Size size;
};

static void ask_pet(Pet *my_pet_ptr) {
  cout << "What is the name of your pet? ";
  cin >> my_pet_ptr->name;
  cout << "What is the age of your pet? ";
  cin >> my_pet_ptr->age;
  cout << "What is the type of your pet (1: Cat, 2: Dog, 3: Bird)? ";
  cin >> my_pet_ptr->type;
  cout << "What is the height of your pet? ";
  cin >> my_pet_ptr->size.height;
  cout << "What is the weight of your pet? ";
  cin >> my_pet_ptr->size.weight;
  cout << "What is the length of your pet? ";
  cin >> my_pet_ptr->size.length;
}

static void exercise_four() {
  Pet my_pet;
  string pet_types[]{"Cat", "Dog", "Bird"};
  ask_pet(&my_pet);
  cout << "Your " << pet_types[my_pet.type - 1] << " is called " << my_pet.name
       << " and is " << my_pet.age << string((my_pet.age==1) ? " year old\n" : " years old") 
       << " and it is " << my_pet.size.length << "cm long, " << my_pet.size.weight << "kg and " 
       << my_pet.size.height << "cm tall\n";
}

void bar_chart(int arr[], int size) {
    int max_height = *max_element(arr, arr + size);

    const int width = 4;

    for (int i = max_height; i > 0; i--) {
        for (int j = 0; j < size; j++) {
            if (arr[j] >= i) {
                cout << setw(width) << "*";
            } else {
                cout << setw(width) << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < size; i++) {
        cout << setw(width) << "-";
    }
    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << setw(width) << i + 2;
    }
    cout << endl;
}

struct Dice_result {
  int dice_one;
  int dice_two;
  int total;
};

static void role_the_dices(int throwing_times = 100) {
  int results[6][6]{};
  int dice_one, dice_two;
  int total_results[11]{};
  int total;
  // int throwing_times = 100;
  cout << "Roll the dices " << throwing_times << " times\n";
  for (int i = 0; i < throwing_times; i++) {
    dice_one = rand() % 6 + 1;
    dice_two = rand() % 6 + 1;
    total = dice_one + dice_two;
    results[dice_one - 1][dice_two - 1]++;
    total_results[total - 2]++;
  }
  for (int i = 1; i <= 6; i++) {
    cout << setw(3) << i;
  }
  cout << endl;
  for (int i = 0; i < 6; i++) {
    cout << i + 1;
    for (int j = 0; j < 6; j++) {
      cout << setw(3) << results[i][j];
    }
    cout << endl;
  }
  cout << "Dice totals\n";
  for (int i = 2; i <= 12; i++) {
    cout << setw(5) << i;
  }
  cout << "" << endl;
  for (int i = 0; i < 11; i++) {
    cout << setw(5) << total_results[i] ;
  }
  cout << "" << endl;
  bar_chart(total_results, 11);
  Dice_result dice_results[throwing_times];
  for (int i = 0; i < throwing_times; i++) {
    dice_one = rand() % 6 + 1;
    dice_two = rand() % 6 + 1;
    dice_results[i].dice_one = dice_one;
    dice_results[i].dice_two = dice_two;
    dice_results[i].total = dice_one + dice_two;
  }
  for (int i = 0; i < throwing_times; i++) {
    cout << dice_results[i].dice_one << " " << dice_results[i].dice_two << " " << dice_results[i].total << endl;
  }
}

void lab_three() {
  // exercise_one();
  // exercise_two();
  // exercise_three();
  // exercise_four();
  role_the_dices(50);
}
