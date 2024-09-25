#include <iostream>
#include <string>

using namespace std;

bool checkPalindrome(string str) {
    int stringSize = str.size();

    for (int i = 0; i < int(stringSize/2); i++) {
        if (str[i] != str[stringSize - i - 1]) return false;
    }
    return true;
}

string LongestPalindromicSubstring(string str) {
    // Iterate through every single element in str

    int maxSize = 0;
    string longestString = "";
    int inputLength = str.size();

    int currSize;
    for (int i = 0; i < inputLength; i++) {
        if (checkPalindrome(str.substr(i, inputLength - i - 1))) {
            currSize = inputLength - (2 * i);
            if (currSize > maxSize) {
                maxSize = currSize;
                longestString = str.substr(i, inputLength - i - 1);
            }
        };
    }

    // For that element, try the largest string that continues to the right and check for palindrome
    // If not palindrome, decrement the size of the thread by 1 and check palindrome
    // 

    return longestString;
}

int main(void) {
    
    string str = "babad";
    
    string result = LongestPalindromicSubstring(str);

    cout << result << endl;

    return 0;
}