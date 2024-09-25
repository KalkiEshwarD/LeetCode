#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int removeDuplicatesFromSortedArray(vector<int>& nums) {
    int j = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            nums[j] = nums[i];
            j++;
        }
    }

    return j;
}

int main(void) {
    vector<int> nums({ 1, 1, 2 });
    
    int result = removeDuplicatesFromSortedArray(nums);

    cout << result << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}