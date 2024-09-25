#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string longestPrefix = "";
    int shortestStringLength = strs[0].size();

    // Check for the shortest string
    for (int i = 0; i < strs.size(); i++) {
        if (strs.at(i).size() < shortestStringLength) {shortestStringLength = strs.at(i).size();}
    }

    // Iterate through each letter in the vector elements
    // Declare a current char for the index you are using
    char currChar;
    for (int i = 0; i < shortestStringLength; i++) {
        // Iterate through vector elements common
        currChar = strs[0][i];
        for (int j = 0; j < strs.size(); j++) {
            if (currChar != strs[j][i]) return longestPrefix;
        }
        longestPrefix += currChar;
    }

    return longestPrefix;
}
    

int main(void) {

    vector<string> strs1({ "flower", "flow", "flight" });
    vector<string> strs2({ "dog", "racecar", "car" });

    longestCommonPrefix(strs1);

    return 0;
}