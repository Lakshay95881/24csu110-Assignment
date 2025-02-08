#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

// Function to remove spaces and convert to lowercase
string preprocessString(string str) {
    string cleaned = "";
    for (char ch : str) {
        if (!isspace(ch)) {
            cleaned += tolower(ch);
        }
    }
    return cleaned;
}

// Function to check if a string is a palindrome
bool isPalindrome(string str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string processed = preprocessString(input);

    if (isPalindrome(processed)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}