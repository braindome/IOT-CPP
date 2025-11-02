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
void string_5() {
  string email;
  int atCount = 0;
  int dotPos = -1;
  cout << "Enter your email:" << endl;
  getline(cin, email);
  for(int i = 0; i < email.length(); i++) {
    if(email[i] == '@') {
      atCount++;
    }
  }
  for(int i = email.length()-1; i >= 0; i--) {
    if(email[i] == '.') {
      dotPos = i;
      break;
    }
  }

  if (atCount != 1) {
    cout << "Invalid email: too many @'s";
  }
  if (dotPos == -1) {
    cout << "Invalid email: no dot found" << endl;
    return;
  }
  
  int suffixLength = email.length() - dotPos - 1;
  if (suffixLength == 2 || suffixLength == 3) {
    cout << "Valid email" << endl;
  } else {
    cout << "Invalid email: suffix must be 2 or 3 characters" << endl;
  }

}


// 6. STRING #6
// Enter a text into a string ”words”.   "hello my name is stefan"
// Now calculate and print how many words text consists of (split/calc spaces etc?)
void string_6() {
  string words;
  int wordCount = 0;
  bool inWord = false;
  cout << "Enter string:" << endl;
  getline(cin, words);
  for (auto &ch : words) {
    if (ch != ' ') {
      if (!inWord) {
        wordCount++;
        inWord = true;
      }
    } else {
      inWord = false;
    }
  }
  cout << "Number of words: " << wordCount << endl;
}

// 7. STRING #7
// Enter a text into a string ”thetext”.
// Now the program should verify whether it is an palindrome it not.  
// Meaning is the word the same if you read it backwards? Spaces should not count and capital/small letters doesn’t matter
void string_7() {
  string text;
  string formattedText;
  string formattedTextReversed;
  cout << "Enter string:" << endl;
  getline(cin, text);

  for(auto &ch : text) {
    if(ch != ' ') {
      formattedText += tolower(ch);
    }
  }
  cout << "Formatted text: " << formattedText << endl;

  for(int i = formattedText.length() -1; i >= 0; i--) {
    formattedTextReversed += formattedText[i];
  }

  if (formattedText == formattedTextReversed) {
    cout << "It's a palindrome!" << endl;
  } else {
    cout << "Not a palindrome :(" << endl;
  }
}

int main() {
  string_7();
}