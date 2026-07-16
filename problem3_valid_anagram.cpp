#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isAnagram(string s, string t){
    if(s.length() != t.length()){
        return false;
    }
    vector<int> count(26, 0);

    for(int i=0; i<s.length(); i++){
        count[s[i] - 'a']++;

        count[t[i] - 'a']--;
    }

    for(int val : count){
        if(val!= 0){
            return false;
        }
    }
    return true;
}

int main(){
    string s, t;
    cout << "Enter the first string: ";
    cin >> s ;
    cout << "\n";
    cout << "Enter the second string: ";
    cin >> t;
    cout << "\n";

    if(isAnagram(s, t)){
        cout << "Result: The strings are anagrams of each other \n";
    } else{
        cout << "Result: Mismatch. Not an anagram.\n";
    }
    return 0;


}