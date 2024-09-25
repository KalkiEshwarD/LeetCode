#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

string convert(string s, int numRows) {
    string result = "";

    vector<vector<char>> charMat(numRows, vector<char>(numRows));

    // Iterate through every single character in the string
    int j = 0;
    for (int i = 0; i < numRows; i++) {
        j = i % numRows;
        
    }

    return result;   
}

int main(void) {

    int n = 3;
    string s = "PAYPALISHIRING";
    int numRows = 3;

    string result;
    result = convert(s, numRows);

    cout << result << endl;

    return 0;
}