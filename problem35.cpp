#include<iostream>
#include<string>
using namespace std;

string reverseString(string s){
    string result = "";
    int n = s.length();
    int i = n-1;
    while(i>=0){
        while(i>=0 && s[i] == ' '){
            i--;
        }
        if(i<0) break;

        int j = i;
        while(i>=0 && s[i] != ' '){
            i--;
        }
        if(!result.empty()){
            result += ' ';
        }
        result += s.substr(i+1, j-i);
    }
    return result;
}
int main(){
    string s1;
    getline(cin, s1);
    string s = reverseString(s1);
    cout << s << endl;
    return 0;
}