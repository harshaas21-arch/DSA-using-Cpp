#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs){
    unordered_map<string, vector<string>> anagramGroups;

    for(const string& s : strs){
        string key = s;
        sort(key.begin(), key.end());
        anagramGroups[key].push_back(s);
    }
    vector<vector<string>> result;
    for(auto& pair : anagramGroups){
        result.push_back(pair.second);
    }
    return result;
}
int main(){
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> grouped = groupAnagrams(strs);

    cout << "Grouped Anagrams: \n";
    for(const auto& group : grouped){
        cout << "[ ";
        for(const string& word : group){
            cout << word << " ";
        }
        cout << "]\n";
    }
    return 0;
}