#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

#include "solution.cpp"

int main() {
    Solution sol;

    // Example 1: s = "abcabcbb" -> 3
    cout << "Example 1: " << sol.lengthOfLongestSubstring("abcabcbb") << endl;

    // Example 2: s = "bbbbb" -> 1
    cout << "Example 2: " << sol.lengthOfLongestSubstring("bbbbb") << endl;

    // Example 3: s = "pwwkew" -> 3
    cout << "Example 3: " << sol.lengthOfLongestSubstring("pwwkew") << endl;

    return 0;
}
//g++ -o main main.cpp && ./main