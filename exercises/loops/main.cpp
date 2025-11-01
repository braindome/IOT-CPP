#include <cctype>
#include <iostream>
#include <ostream>
#include <string>
#include <sstream>
using namespace std;

void loop_2() {
  int n1 = 0;
  int n2 = 0;
  cout << "Enter first number:" << endl;
  cin >> n1;
  cout << "Enter second number:" << endl;
  cin >> n2;
  if(n1 < n2) {
    for(int i = n1+1; i < n2; i++) {
      cout << i << endl;
    }
    while(++n1 < n2) {
      cout << n1 << endl;
    }
  } else if (n1 > n2) {
    // for(int i = n1-1; i > n2; i--) {
    //   cout << i <<endl;
    // }
    while(--n1 > n2) {
      cout << n1 <<endl;
    }
  }
}

void loop_1() {
  for (int i = 0; i <= 10; i++) {
    cout << i << endl;
  }
  int j = 0;
  while(j <= 10) {
    cout << j << endl;
    j++;
  }
}

int main() {
  loop_2();
}