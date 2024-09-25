#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    
    unordered_map<int, int> hashMap;
    vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        if (hashMap.find(nums[i]) == hashMap.end()) {
            hashMap.insert({ target - nums[i], i });
        } else {
            result.push_back(i);
            result.push_back(hashMap[nums[i]]);
            return result;
        }
    }

    return result;

}

int main(void) {
    
    vector<int> test1({ 2, 7, 11, 15});
    
    vector<int> result = twoSum(test1, 9);
    
    cout << result[0];
    cout << result[1] << endl;
    
    return 0;
}    