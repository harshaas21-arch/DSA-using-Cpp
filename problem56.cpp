#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string customSortString(const string& order, string s){
    int rank[26];
    fill(rank, rank+26, 999);
    for(int i=0; i<order.length(); i++){
        rank[order[i] - 'a'] = i;
    }
        sort(s.begin(), s.end(), [&rank](char a, char b){
        return rank[a - 'a'] < rank[b - 'a'];
    });
    return s;
}
int main(){
    string order = "cba";
    string s = "abcd";
    string result = customSortString(order, s);
    cout << "Custom sorted string : " << result << endl;
    return 0;
}