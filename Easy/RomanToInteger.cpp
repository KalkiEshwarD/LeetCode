#include <iostream>
#include <string>
#include <map>
#include <stack>

using namespace std;

int romanToInteger(string romanNumber) {
    const char romanNumerals[] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };

    int result = 0;

    stack<int> romanStack;

    map<char, int> romanMap = { 
        { 'I', 1 },
        { 'V', 5 },
        { 'X', 10 },
        { 'L', 50 },
        { 'C', 100 },
        { 'D', 500 },
        { 'M', 1000 }
    };

    // Interate through each symbol in the string
    // Maintain an int result
    // Maintain a stack
    // If stack is empty, add the symbol to the stack
    // If the next symbol is of lower value than top of stack, push
    // If the next symbol is greater than the one at top of stack, then add to result then subtract from stack

    // Check for valid roman numeral strigs later.

    int symbolVal;
    for (char c : romanNumber) {
        symbolVal = romanMap[c];
        if (romanStack.empty()) romanStack.push(romanMap[c]);
        else if (romanStack.top() >= symbolVal) {
            romanStack.push(symbolVal);
        } else {
            // Take c and add it to result.
            // Subtract the values from the stack
            result += symbolVal;

            while (!romanStack.empty()) {
                if (romanStack.top() >= symbolVal) {
                    result += romanStack.top();
                } else {
                    result -= romanStack.top();
                }

                romanStack.pop();
            }
        }
    }

    while (!romanStack.empty()) {
        result += romanStack.top();
        romanStack.pop();
    }

    return result;
}

int main(void) {
    int val = romanToInteger("MCMXCIV");
    
    cout << val << endl;
    
    return 0;
}