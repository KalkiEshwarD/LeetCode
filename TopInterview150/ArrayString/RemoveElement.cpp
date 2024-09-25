#include <iostream>
#include <vector>

using namespace std;


void printNums(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
}

int removeElement(vector<int>& nums, int val) {
    int vecSize = nums.size();
    int removed = 0;


    for (int i = vecSize - 1; i >= 0; i--) {
        if (nums[i] == val) {
            nums.erase(nums.begin() + i);
            removed++;
        }
        printNums(nums);
    }

    for (int i = 0; i < removed; i++) {
        nums.push_back(0);
    }

    return vecSize - removed;
}

int main(void) {

    vector<int> nums({ 3, 2, 2, 3 });
    int val = 3;

    int result = removeElement(nums, val);

    cout << "Result: "<< result << endl;

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}