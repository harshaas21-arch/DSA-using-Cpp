#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<string>
using namespace std;

int main(){
    string s1,s2;
    cin >> s1;
    cin >> s2;
    if(s1.length() != s2.length()){ cout << "Invalid";}
    unordered_map<char, int> um1, um2;
    for(char ch : s1){
        um1[ch]++;
    }
    for(char ch : s2){
        um2[ch]++;
    }
    if(um1 == um2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}