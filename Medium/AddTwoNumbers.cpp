#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
    // Maintain a digit sum
    // Maintain which digit it is
    // Maintain totalSum
    int digitSum = 0;
    int digit = 1;
    int totalSum = 0;

    // ListNode ptr for result node
    ListNode *resultNode;
    // The vector that will hold the resulting nodes
    vector<ListNode> nodeVector;

    // Initialize two pointer
    ListNode *nodeptr1 = l1;
    ListNode *nodeptr2 = l2;

    // Move pointers through every single node 
    // If both pointers are null, exit loop
    // If one of the pointers is null, do not advance that pointer

    while (nodeptr1 != nullptr || nodeptr2 != nullptr) {
        // Add numbers store in digit sum
        // Check if one of the nodes is null, then make its value 0;
        digitSum = ((nodeptr1 != nullptr) ? nodeptr1->val : 0) + ((nodeptr2 != nullptr) ? nodeptr2->val : 0);

        // Add to total sum
        totalSum += (digit * digitSum);

        // Increase digit
        digit *= 10;

        // Move node pointers
        if (nodeptr1 != nullptr) nodeptr1 = nodeptr1->next;
        if (nodeptr2 != nullptr) nodeptr2 = nodeptr2->next;

        if (nodeptr1 == nullptr && nodeptr2 == nullptr) break;
    }    

    // Take the digit and put it into a linked list
    // If it's 0 then return a List node with 0

    if (totalSum == 0) {
        nodeVector.push_back(ListNode(0));
    } else {
        int tempVal;
        // For evey digit in totalSum, create a node
        while (totalSum != 0) {
            tempVal = (totalSum % 10);

            // Create a node for every digit
            nodeVector.push_back(ListNode(tempVal));

            // Update totalSum
            totalSum = ((totalSum - tempVal) / 10);
        }

        // Update each node's next value in the node vector
        for (int i = 1; i < nodeVector.size(); i++) {
            nodeVector[i - 1].next = &nodeVector[i]; 
        }
    }

    resultNode = &nodeVector[0];

    ListNode *ptr = resultNode;

    while (ptr != nullptr) {
        cout << ptr->val << endl;
        ptr = ptr->next;
    }

    return resultNode;
}

int main(void) {
    // ListNode n3 = ListNode(3);
    // ListNode n2 = ListNode(4, &n3);
    // ListNode n1 = ListNode(2, &n2);

    // ListNode m3 = ListNode(4);
    // ListNode m2 = ListNode(6, &m3);
    // ListNode m1 = ListNode(5, &m2);

    // ListNode n1 = ListNode(0);

    // ListNode m1 = ListNode(0);

    ListNode n7 = ListNode(9);
    ListNode n6 = ListNode(9, &n7);
    ListNode n5 = ListNode(9, &n6);
    ListNode n4 = ListNode(9, &n5);
    ListNode n3 = ListNode(9, &n4);
    ListNode n2 = ListNode(9, &n3);
    ListNode n1 = ListNode(9, &n2);

    ListNode m4 = ListNode(9);
    ListNode m3 = ListNode(9, &m4);
    ListNode m2 = ListNode(9, &m3);
    ListNode m1 = ListNode(9, &m2);

    ListNode *result;

    result = addTwoNumbers(&n1, &m1);

    return 0;
}