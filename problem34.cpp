#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool checkInclusion(string s1, string s2){
    int n1 = s1.length();
    int n2 = s2.length();

    if (n1>n2) return false;

    vector<int> s1Count(26, 0);
    vector<int> windowCount(26, 0);

    for(int i = 0; i<n1; i++){
        s1Count[s1[i] - 'a']++;
        windowCount[s2[i] - 'a']++;
    }
    if(s1Count == windowCount) return true;

    for(int i=n1; i<n2; i++){
        windowCount[s2[i] - 'a']++;

        windowCount[s2[i-n1] - 'a']--;

        if(s1Count == windowCount){
            return true;
        }
    }
    return false;
}
int main() {
    string s1_a = "ab", s2_a = "eidbaooo";
    string s1_b = "ab", s2_b = "eidboaoo";

    cout << boolalpha;
    cout << "Test 1 (\"eidbaooo\" contains \"ab\"): " << checkInclusion(s1_a, s2_a) << "\n"; // Expected: true
    cout << "Test 2 (\"eidboaoo\" contains \"ab\"): " << checkInclusion(s1_b, s2_b) << "\n"; // Expected: false

    return 0;
}