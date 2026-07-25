#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValid(string s){
    stack<char> st;
    while(!s.empty()){
        for(char c : s){
            if(c == '(' || c == '[' || c == '{'){
                st.push(c);
            }
            else if(c == ')' && st.top() == '(' || c == ']' && st.top() == '[' || c == '}' && st.top() == '{'){
                st.pop();
            }
            else{
                return false;
            }
        }
        return true;
    }
}
int main(){
    string s;
    cin >> s;
    cout << boolalpha;
    string ans = (isValid(s))? "Valid" : "Invalid";
    cout << "The string : " << s << " is " << ans;
    cout << endl;
    return 0;
}