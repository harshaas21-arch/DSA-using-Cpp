#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool ValidParenthesis(string s){
    stack<char> v;
    for(char ch : s){
        if(ch == '(' || ch == '{' || ch == '['){
            v.push(ch);
        }
        else{
            if(ch == ')' && v.top() == '(' || ch == '}' && v.top() == '{' || ch == ']' && v.top() == '['){
                v.pop();
            }
            else{
                return false;
            }
        }
    
    }
    return true;
}
int main(){
    string s;
    cin >> s;
    bool ans = ValidParenthesis(s);
    if(ans){
        cout << "YES" << endl;
    }
    else{
        cout << "N0" << endl;
    }
    return 0;
}