#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

vector<vector<string>> groupAnagrams(const vector<string>& strs){
    unordered_map<string, vector<string>> anagramGroups;
    for(const string& str : strs){
        string key = str;
        sort(key.begin(), key.end());
        anagramGroups[key].push_back(str);
    }
    vector<vector<string>> result;
    for(const auto& pair : anagramGroups){
        result.push_back(pair.second);
    }
    return result;
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    
    vector<vector<string>> grouped = groupAnagrams(strs);

    cout << "Grouped Anagrams:\n[\n";
    for (const auto& group : grouped) {
        cout << "  [ ";
        for (const string& word : group) {
            cout << "\"" << word << "\" ";
        }
        cout << "]\n";
    }
    cout << "]\n";

    return 0;
}