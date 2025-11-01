#include <cctype>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

// STRINGHANDLING

// 1. STRING #1

// Ask the user to enter three strings.  Add the strings up (also using space as delimiter) 
// Enter string 1:Leif
// Enter string 2:Stefan
// Enter string 3:Holmberg
// Result: Leif Stefan Holmberg
void string_1() {
  string s1, s2, s3;
  cout << "Enter string 1:" << endl;
  getline(cin, s1);
  cout << "Enter string 2:" << endl;
  getline(cin, s2);
  cout << "Enter string 3:" << endl;
  getline(cin, s3);
  cout << "Result: " << s1 << " " << s2 << " " << s3 << endl;
}


// 2. STRING #2

// Enter a text into a string. Find the POSITION of the first letter ’s’
// Enter string: my name is Stefan
// Result: position is 9
// What happens if no match?
void string_2() {
  string inputText;
  cout << "Enter string:" << endl;
  getline(cin, inputText);
  int pos = inputText.find_first_of('s');
  if (pos < 0) {
    cout << "Not found" << endl;
  } else {
    cout << "Position is " << pos;
  }
  
}


// 3. STRING #3
// Enter a text into a string ”name”.
// Write code to modify the string so forname and lastname starts with capital letters. 
// Enter a name:stefan holmberg
// Result. "Stefan Holmberg"
// Enter a name:leif stefan holmberg
// Result. "Leif Stefan Holmberg"
// How? Will keeping track of space help?

void string_3() {
  string name;
  int count = 0;
  cout << "Enter name:" << endl;
  getline(cin, name);
  name[0] = toupper(name[0]);
  for (int i = 0; i < name.length(); i++) {
    if (name[i] == ' ') {
      name[i+1] = toupper(name[i+1]);
    }
  }
  cout << name << endl;
}

// 4. STRING #4
// Enter a text into a string ”change”.
// Replace all spaces with ’*.. Then calculate  how many ’*’ there are in the string
// Enter a string:hi my name is stefan
// Result:hi*my*name*is*stefan
// There are 4 occurrences of *
void string_4() {
  string change;
  int count = 0;
  cout << "Enter string:" << endl;
  getline(cin, change);
  for (int i = 0; i < change.length(); i++) {
    if (change[i] == ' ') {
      change[i] = '*';
      count++;
    }
  }
  cout << "Result: " << change << endl << "There are " << count << " occurrences of *" << endl;
  
}


// 5. STRING #5

// Enter a text into a string ”email”.
// Program should now ”validate” that is is an valid email by using these rules 
// - contains a ’@’
// - after the last ’.’ it should be 2 or 3 characters

// (weird rules I know meaning)
// bla@whatever.info is not valid then but
// bla@whatever.com is  valid )



// 6. STRING #6

// Enter a text into a string ”words”.   "hello my name is stefan"
// Now calculate and print how many words text consists of (split/calc spaces etc?)

// 7. STRING #7

// Enter a text into a string ”thetext”.
// Now the program should verify whether it is an palindrome it not.  Meaning is the word the same if you read it backwards? Spaces should not count and capital/small letters doesn’t matter
// Example of palindromes:

int main() {
  string_4();
}