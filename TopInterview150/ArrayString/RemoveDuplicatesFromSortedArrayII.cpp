#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int removeDuplicatesFromSortedArray(vector<int> nums) {
    // Iterate through the array
    // If an element occurs twice, store it.
    // If it occurs more, delete it.
    int vecSize = nums.size();
    int tempNum = nums[vecSize - 1];
    bool isTwice = false;
    
    for (int i = vecSize - 2; i > 0; i--) {
        
        if (nums[i] == tempNum) {
            if (isTwice) {
                nums.erase(nums.begin() + i + 2);
            } else {
                isTwice = true;
            }
        } else {
            tempNum = nums[i];
            isTwice = false;
        }
    }

    return nums.size();
}

int main() {
    vector<int> nums({ 1, 1, 2 });
    
    int result = removeDuplicatesFromSortedArray(nums);

    cout << result << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}