#include <iostream>
#include <string>

using namespace std;

int main() {
  string input; // This variable will be directly manipulated/encoded
  int count, length; // Count will track the progress through the string, length will contain the length of input

  // Get phrase to encode
  cout << "Enter your phrase: " << endl;
  getline(cin, input);

  // Get length of phrase
  length = input.length();

  // Run for each character
  for (count = 0; count < length; count++) {
    // Check if is alphabetical
    // Will ignore spaces, numbers, symbols
    if (isalpha(input[count])) {
      // Convert to lower case
      input[count] = tolower(input[count]);
      // Shift the character being encoded 13 times
      for (int i = 0; i < 13; i++) {
        // If the character is currently Z, shift it to A
        if (input[count] == 'z') {
          input[count] = 'a';
        } else {
          // Increment it otherwise
          input[count]++;
        }
      }
    }
  }

  // Output result
  cout << "Encoded phrase: " << input << endl;
}