#include<iostream>
#include<vector>
#include<string>
using namespace std;

string longestCommonPrefix(vector<string>& strs){
    if(strs.empty()) return "";

    string prefix = strs[0];
    for(size_t i=1; i<strs.size(); i++){
        while(strs[i].find(prefix) != 0){
            prefix.pop_back();
            if(prefix.empty()){
                return "";
            }
        }
    }
    return prefix;
}
int main(){
    vector<string> string1 = {"flower", "flow", "flight"};
    vector<string> string2 = {"dog", "racecar", "car"};

    cout << "Test 1 Prefix: \"" << longestCommonPrefix(string1) << "\"\n";
    cout << "Test 2 Prefix: \"" << longestCommonPrefix(string2) << "\"\n";

    return 0;

}