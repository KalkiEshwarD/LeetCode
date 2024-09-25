#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int>& nums) {
    int element = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (count == 0) {
            count++;
            element = nums[i];
        } else if (element == nums[i]) {
            count++;
        } else if (element != nums[i]) {
            count--;
        }
    }

    return element;
}

int main() {

    vector<int> nums({ 2, 2, 1, 1, 1, 2, 2 });

    int result = majorityElement(nums);

    cout << result << endl;

    return 0;
}