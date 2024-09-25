#include <iostream>
#include <vector>

using namespace std;

int MedianOfTwoSortedArrays(vector<int> vec1, vector<int> vec2) {
    
}

int main(void) {
    vector<int> vec1({ 1, 3 });
    vector<int> vec2({ 2 });

    int result = MedianOfTwoSortedArrays(vec1, vec2);

    cout << result << endl;

    return 0;
}