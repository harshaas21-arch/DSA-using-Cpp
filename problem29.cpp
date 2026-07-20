#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

string decodeString(string s){
    stack<int> numStack;
    stack<string> strStack;
    string currentStr = "";
    int currNum = 0;

    for(char c : s){
        if(isdigit(c)){
            currNum = currNum * 10 + (c-'0');
        }
        else if(c == '['){
            numStack.push(currNum);
            strStack.push(currentStr);
            currNum = 0;
            currentStr = "";
        }
        else if(c == ']'){
            int repeatTimes = numStack.top();
            numStack.pop();

            string prevStr = strStack.top();
            strStack.pop();

            string expanded = "";
            for(int i=0; i<repeatTimes; i++){
                expanded += currentStr;
            }
            currentStr = prevStr + expanded;
        }
        else{
            currentStr += c;
        }
    }
    return currentStr;
}

int main(){
    string test1 ="3[a]2[bc]";
    string test2 = "3[a2[c]]";

    cout << "Decoded 1: " << decodeString(test1) << "\n";
    cout << "Decoded 2: " << decodeString(test2) << "\n";

    return 0;
}