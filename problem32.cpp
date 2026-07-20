#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int lengthOfLongestSubstring(string s){
    vector<int> lastSeen(128, -1);
    int maxLength = 0;
    int left = 0;
    for(int right=0; right<s.length(); right++){
        char currentChar = s[right];
        if(lastSeen[currentChar] >= left){
            left = lastSeen[currentChar] + 1;
        }
        lastSeen[currentChar] = right;
        maxLength = max(maxLength, right - left + 1);
    }
    return maxLength;
}
int main(){
    string test1 = "abcabcbb";
    string test2 = "bbbbb";
    string test3 = "pwwkew";
    cout << "Test 1 (\"abcabcbb\"): " << lengthOfLongestSubstring(test1) << "\n"; // Expected: 3
    cout << "Test 2 (\"bbbbb\"):    " << lengthOfLongestSubstring(test2) << "\n"; // Expected: 1
    cout << "Test 3 (\"pwwkew\"):   " << lengthOfLongestSubstring(test3) << "\n"; // Expected: 3

    return 0;
}