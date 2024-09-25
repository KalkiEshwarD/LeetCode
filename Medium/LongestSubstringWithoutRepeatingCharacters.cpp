#include <iostream>
#include <string>
#include <set>

using namespace std;

string findLongestSubstringWithoutRepeatingCharacters(string str) {
    // Maintain a charset to hold all the characters that are part of the substring
    set<char> charSet;

    // Maintain a max length of the string found
    // Maintain the max string that is found
    int maxLength = 0;
    string maxString = "";

    // Maintain a temporary length of the string that is found
    int tempLength = 0;
    string tempString = "";
    
    // Iterate through the entire str to find a the string
    for (char c : str) {
        // Check if the character is part of the charset
        if (charSet.find(c) == charSet.end()) {
            // If its not part of the set, then add it to the set, increase the tempLength and increase the templength and tempString
            charSet.insert(c);
            tempLength += 1;
            tempString += c;

        } else {
            // If an extra element is found, remove it and the elements to its left from the matched sub string
            size_t index = str.find(c);

            for (int i = 0; i <= index; i++) {
                charSet.erase(tempString[i]);
            }
            
            tempLength = maxLength - index - 1;
            tempString = tempString.substr(index + 1, tempLength);
            
            charSet.insert(c);
            tempString += c;
        }
        
            if (tempString > maxString) {
                maxString = tempString;
            }
    }
    

    // Return the maximum string that is found
    return maxString;
}

int main(void) {
    string s;
    // cin >> s;
    s = "pwwkew";
    string result = findLongestSubstringWithoutRepeatingCharacters(s);
    
    cout << result << endl;

    return 0;
} 