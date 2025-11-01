#include <cctype>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ostream>
#include <random>
#include <string>
using namespace std;

// 5. LOOP #5
// Rolling the dice
// Throw two dices , then show result according to screen dump below.  Repeat as
// long as you dont answer ”y” or ”yes”
void loop_5() {
  srand(time(0));

  while (true) {
    int die1, die2;
    char choice;
    cout << "Rolling the dice.." << endl << "The values are..." << endl;

    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;

    cout << "Die 1: " << die1 << endl;
    cout << "Die 2: " << die2 << endl;

    cout << "Roll again?" << endl;
    cin >> choice;
    if (choice == 'n') {
      break;
    } else if (choice == 'y') {
      continue;
    } else {
      cout << "Invalid choice" << endl;
      break;
    }
    
  }

}

// 4. LOOP #4
// Ask user to enter a number . Repeat it 10 times. Calculate the sum of all 10
// numbers Print Sum of all your numbers are: <thesum>
void loop_4() {
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    int input;
    cout << "Enter number #" << (i + 1) << endl;
    cin >> input;
    cout << "Input is " << input << endl;
    sum = sum + input;
  }
  cout << "The sum of all your numbers is " << sum << endl;
}

// 3. LOOP #3
// Write program where user
// 1. Enter two numbers
// 2. Write the sum of those two numbers
// 3. Write a question : ”Do you wanna continue(Y/N)?”.
// 4. If ”Y” repeat a-c
// 5. If ”N”  the program quits
void loop_3() {
  while (true) {
    int n1, n2;
    int sum = 0;
    cout << "Enter first number:" << endl;
    cin >> n1;
    cout << "Enter second number:" << endl;
    cin >> n2;
    sum = n1 + n2;
    cout << "Sum is " << sum << endl
         << "Do you want to continue? (y/n)" << endl;
    char choice;
    cin >> choice;
    if (choice == 'n') {
      break;
    } else if (choice == 'y') {
      continue;
    } else {
      cout << "Invalid choice" << endl;
      break;
    }
  }
}

void loop_2() {
  int n1 = 0;
  int n2 = 0;
  cout << "Enter first number:" << endl;
  cin >> n1;
  cout << "Enter second number:" << endl;
  cin >> n2;
  if (n1 < n2) {
    for (int i = n1 + 1; i < n2; i++) {
      cout << i << endl;
    }
    while (++n1 < n2) {
      cout << n1 << endl;
    }
  } else if (n1 > n2) {
    // for(int i = n1-1; i > n2; i--) {
    //   cout << i <<endl;
    // }
    while (--n1 > n2) {
      cout << n1 << endl;
    }
  }
}

void loop_1() {
  for (int i = 0; i <= 10; i++) {
    cout << i << endl;
  }
  int j = 0;
  while (j <= 10) {
    cout << j << endl;
    j++;
  }
}

int main() { loop_5(); }