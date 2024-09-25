#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int x) {
    string x_string = to_string(x);

    for (int i = 0; i < int(x_string.length()/2); i++) {
        if (x_string[i] != x_string[x_string.length() - i - 1]) {
            return false;
        }
    }

    return true;
}

int main(void) {

    cout << isPalindrome(343) << endl;

    return 0;
}