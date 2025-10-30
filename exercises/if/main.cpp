#include <iostream>
#include <string>
#include <cfloat>
#include <ctime>
using namespace std;

void if_4() {
  int age;
  cout << "Enter age:" << endl;
  cin >> age;
  if (age < 18) {
    cout << "Not adult" << endl;
  }
  if (age > 65) {
    cout << "Retired" << endl;
  }
  if (age > 18) {
    cout << "Adult" << endl;
  }
}

void if_3() {
  float temp;
  cout << "Enter temperature:" << endl;
  cin >> temp;
  if (temp > 38.8) {
    cout << "You have a fever" << endl;
  }
  if (temp > 39.5) {
    cout << "You should find a doctor" << endl;
  }
  if (temp < 37.8) {
    cout << "You have no fever" << endl;
  }
}

void if_1() {
  int num;
  cout << "Enter a number:";
  cin >> num;
  if (num>10) {
    cout << "Larger than 10";
  } else if (num<10) {
    cout << "Lesser than 10";
  } else {
    cout << "Is 10";
  }
}

void if_2() {
  int n;
  cout << "How many packages of milk do we have?" << endl;
  cin >> n;
  if(n<10) {
    cout << "Order 30 packages" << endl;
  } if(n>10 && n<20) {
    cout << "Order 20 packages" << endl;
  } else {
    cout << "We good" << endl;
  }
}

int main() {
  if_4();

}