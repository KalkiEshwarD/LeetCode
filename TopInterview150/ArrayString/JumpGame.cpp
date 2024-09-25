#include <iostream>
#include <vector>

using namespace std;

bool canJump(vector<int>& nums) {
    int lastIndex = nums.size() - 1;

    if (lastIndex == 0) return true;
    
    int goal = lastIndex;

    for (int i = lastIndex - 1; i >= 0; i--) {
        if (nums[i] + i >= goal) {
            goal = i;
        }
    }

    return (goal == 0);
}

int main() {
    
    vector<int> nums({ 2, 0, 0 });

    bool result = canJump(nums);

    cout << "Result: " << result << endl;

    return 0;
}