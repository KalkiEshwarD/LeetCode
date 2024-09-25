#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotateArray(vector<int>& nums, int k) {
    k = k % nums.size();    

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());

}

int main() {

    vector<int> nums({ 1, 2, 3, 4, 5, 6, 7 });
    int val = 3;

    rotateArray(nums, val);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
} 