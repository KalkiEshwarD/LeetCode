#include <iostream>
#include <vector>

using namespace std;

void MergeSortedArray(vector<int>& nums1, int m, vector<int>& nums2, int n) {    
    // Initialize a temp vector
    vector<int> temp;

    // Initialize two pointers to point to the beginning of the two vectors.
    int ptr1 = 0;
    int ptr2 = 0;

    // Check which pointer's value is least and append it to the temp vector and increment that pointer
    while ((ptr1 < m) && (ptr2 < n)) {
        if (nums1[ptr1] <= nums2[ptr2]) {
            temp.push_back(nums1[ptr1]);
            ptr1++;
        } else {
            temp.push_back(nums2[ptr2]);
            ptr2++;
        }
    }

    // If the pointer has reached the end of the vector, then stop accessing it and then proceed to to add the rest of the elements from the other list into the temp arr
    if (ptr1 < m) {
        while (ptr1 < m) {
            temp.push_back(nums1[ptr1]);
            ptr1++;
        }
    }

    if (ptr2 < n) {
        while (ptr2 < n) {
            temp.push_back(nums2[ptr2]);
            ptr2++;
        }
    }

    // Swap temp vector with nums1.
    nums1.swap(temp);
}

int main(void) {

    // Elements sorted in ascending order.

    vector<int> nums1({ 1, 2, 3, 0, 0, 0 });
    int m = 3;

    vector<int> nums2({ 2, 5, 6 });
    int n = 3;

    MergeSortedArray(nums1, m, nums2, n);

    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << " ";
    }

    return 0;
}