#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

#include "solution.cpp"

ListNode* makeList(const vector<int>& vals) {
    ListNode dummy(0);
    ListNode* cur = &dummy;
    for (int v : vals) {
        cur->next = new ListNode(v);
        cur = cur->next;
    }
    return dummy.next;
}

void printList(ListNode* head) {
    cout << "[";
    while (head) {
        cout << head->val;
        if (head->next) cout << ",";
        head = head->next;
    }
    cout << "]" << endl;
}

int main() {
    Solution sol;

    // Example 1: l1 = [2,4,3], l2 = [5,6,4] -> [7,0,8]
    ListNode* l1 = makeList({2, 4, 3});
    ListNode* l2 = makeList({5, 6, 4});
    cout << "Example 1: ";
    printList(sol.addTwoNumbers(l1, l2));

    // Example 2: l1 = [0], l2 = [0] -> [0]
    l1 = makeList({0});
    l2 = makeList({0});
    cout << "Example 2: ";
    printList(sol.addTwoNumbers(l1, l2));

    // Example 3: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9] -> [8,9,9,9,0,0,0,1]
    l1 = makeList({9, 9, 9, 9, 9, 9, 9});
    l2 = makeList({9, 9, 9, 9});
    cout << "Example 3: ";
    printList(sol.addTwoNumbers(l1, l2));

    return 0;
}
//g++ -o main main.cpp && ./main
