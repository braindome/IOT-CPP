#include <cctype>
#include <iostream>
#include <ostream>
#include <string>
#include <sstream>
using namespace std;

void if_7() {
  int cash;
  bool discount;
  char discountInput;
  cout << "How much money do you have?" << endl;
  cin >> cash;
  cout << "Do you have a discount? y/n";
  cin >> discountInput;
  if (discountInput == 'y') {
    discount = true;
  } else discount = false;
  if (cash >= 15 && cash <= 25) {
    if (!discount) {
      cout << "You can afford a small hamburger" << endl;
    } else {
      cout << "You can afford a small hamburger and fries" << endl;
    }
  } else if (cash > 25 && cash <= 50) {
    if (!discount) {
      cout << "You can afford a large hamburger" << endl;
    } else {
      cout << "You can afford a large hamburger and fries" << endl;
    }
  }
  if (cash > 60 || (cash > 50 && cash < 60 && discount)) {
    cout << "You can afford a meal with drink" << endl;
  }
}

void if_6() {
  cout << "Which country do you live in?" << endl;
  string country;
  getline(cin, country);
  if (country == "Sweden" || country == "Denmark" || country == "Norway") {
    cout << "You're in Scandinavia";
  } else {
    cout << "You don't live in Scandinavia";
  }
  
}

void if_5() {
  char cat;
  cout << "Choose category:" << endl << "A. Adult" << endl << "R. Retired" << endl << "S. Student" << endl;
  cin >> cat;
  cat = toupper(cat);
  if(cat == 'A') {
    cout << "Ticket price: 30 SEK";
  } else if(cat == 'R' || cat == 'S') {
    cout << "Ticket price: 20 SEK";
  } else {
    cout << "Wrong category";
  }
}

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