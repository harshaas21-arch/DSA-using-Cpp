#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValid(string str){
    stack<char> s;

    for(char ch : str){
        if(ch == '(' || ch == '[' || ch == '{'){
            s.push(ch);
        }
        else{
            if(s.empty()) return false;

            char topChar = s.top();

            if((ch == ')' && topChar == '(') ||
                (ch == ']' && topChar == '[') ||
                (ch == '}' && topChar == '{')){
                    s.pop();
                }
            else{
                return false;
            } 
        }
    }
    return s.empty();
}

int main(){
    string s1 = "{[()]}";
    string s2 = "([)]";

    cout << s1 << " is " << (isValid(s1) ? "Valid" : "Invalid") << endl;
    cout << s2 << " is " << (isValid(s2) ? "Valid" : "Invalid") << endl;

    return 0;
}