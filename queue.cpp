#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

int firstUniqChar(string str){
    vector<int> freq(26, 0);
    queue<int> q;

    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        freq[ch - 'a']++;
        q.push(i);
        while(!q.empty() && freq[str[q.front()] - 'a'] > 1){
            q.pop();
        }
    }
    if(!q.empty()){
        return q.front();
    }
    return -1;
}
int main(){
    string s1 = "leetcode";
    string s2 = "loveleetcode";

    cout << "First index of leetcode " << firstUniqChar(s1) << endl;
    cout << "First index of loveleetcode " << firstUniqChar(s2) << endl;
    return 0;
}
