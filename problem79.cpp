#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    string s;
    cin >> s;
    int answer = -1;
    unordered_map<char, int> freq;
    for(char ch : s){
        freq[ch]++;
    }
    for(char ch : s){
        if(freq[ch] != 1){
            continue;
        }
        else if(freq[ch] == 1){
            answer = s.find(ch);
            break;
        }
    }
                cout << answer;

    return 0;
}