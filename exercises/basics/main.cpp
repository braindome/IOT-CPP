#include <iostream>
#include <string>
#include <climits>
#include <cfloat>
#include <ctime>
using namespace std;

void convertToHours() {
  int minutes;
  cout << "Enter amount of minutes:" << endl;
  cin >> minutes;
  cout << "Equals " << minutes/60 << " hours and " << minutes%60 << " minutes." << endl;
}

void vat() {
  float amount, taxedAmount;
  cout << "Enter amount:" << endl;
  cin >> amount;
  taxedAmount = amount + (amount/100)*25;
  cout << "Price after taxes: $" << taxedAmount << endl;

}

void calculations() {
  float num1, num2, avg, sum, diff;
  cout << "Enter first number:" << endl;
  cin >> num1;
  cout << "Enter second number:" << endl;
  cin >> num2;
  sum = num1 + num2;
  diff = num1 - num2;
  avg = sum/2;
  cout << "Sum: " << sum << endl << "Difference: " << diff << endl << "Average: " << avg << endl;

}

void age() {
  time_t timestamp;
  struct tm *datetime;
  int birthYear, age;
  time(&timestamp);

  cout << "Enter birth year:" << endl;
  cin >> birthYear;

  datetime = localtime(&timestamp);
  age = (1900 + datetime -> tm_year) - birthYear;
  cout << "You are " << age << " years old." << endl;
}

void enterAndSum() {
  int tal1, tal2, sum;
  cout << "Enter first number:" << endl;
  cin >> tal1;
  cout << "Enter second number:" << endl;
  cin >> tal2;
  sum = tal1 + tal2;
  cout << "The sum of " << tal1 << " and " << tal2 << " is " << sum << endl;
}

void inputName() {
  string firstName, lastName;
  cout << "Enter your first name:" << endl;
  getline(cin, firstName);
  cout << "Enter your last name:" << endl;
  getline(cin, lastName);
  cout << "Your name is " << firstName << " " << lastName << endl;
}

void printMinMax() {
  cout << "Char - Min: " << CHAR_MIN << " Max: " << CHAR_MAX << endl;
  cout << "Unsigned Char - Min: " << 0 << " Max: " << UCHAR_MAX << endl;
  cout << "Short Int - Min: " << SHRT_MIN<< " Max: " << SHRT_MAX << endl;
  cout << "Unsigned Short Int - Min: " << 0 << " Max: " << USHRT_MAX << endl;
  cout << "Int - Min: " << INT_MIN << " Max: " << INT_MAX << endl;
  cout << "Unsigned Int - Min: " << 0 << " Max: " << UINT_MAX << endl;
  cout << "Long - Min: " << LONG_MIN << " Max: " << LONG_MAX << endl;
  cout << "Unsigned Long - Min: " << 0 << " Max: " << ULLONG_MAX << endl;
  cout << "Long Long - Min: " << LLONG_MIN << " Max: " << LLONG_MAX << endl;
  cout << "Unsigned Long Long - Min: " << 0 << " Max: " << ULLONG_MAX << endl;
  cout << "Float - Min: " << FLT_MIN << " Max: " << FLT_MAX << endl;
  cout << "Double - Min: " << DBL_MIN << " Max: " << DBL_MAX << endl;

}

void hotel() {
  int price, nights;
  cout << "Vad kostar per natt?" << endl;
  cin >> price;
  cout << "Hur många nätter?" << endl;
  cin >> nights;
  cout << "Totalt: " << price*nights << endl;
}

void helloStefan() { 
  string name = "Antonio";
  cout << "Hello " << name << "!" << endl;
}

void fakeAddress() {
  cout << "Hej jag heter Stefan" << endl << "Testgatan 12" << endl << "111 55 Teststad" << endl;
}

int main(){
    // string name = "Stefan";
    // cout << "Hello" << " " << name << endl;

    // fakeAddress();
    // helloStefan();
    // hotel();
    convertToHours();
    return 0;
}