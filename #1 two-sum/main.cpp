#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

#include "solution.cpp"

void printResult(const vector<int>& result) {
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]" << endl;
}

int main() {
    Solution sol;

    // Example 1: nums = [2,7,11,15], target = 9 -> [0,1]
    vector<int> nums1 = {2, 7, 11, 15};
    cout << "Example 1: ";
    printResult(sol.twoSum(nums1, 9));

    // Example 2: nums = [3,2,4], target = 6 -> [1,2]
    vector<int> nums2 = {3, 2, 4};
    cout << "Example 2: ";
    printResult(sol.twoSum(nums2, 6));

    // Example 3: nums = [3,3], target = 6 -> [0,1]
    vector<int> nums3 = {3, 3};
    cout << "Example 3: ";
    printResult(sol.twoSum(nums3, 6));

    return 0;
}
//g++ -o main main.cpp && ./main