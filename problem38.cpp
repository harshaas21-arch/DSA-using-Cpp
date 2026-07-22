#include<iostream>
#include<string>
using namespace std;

void reverseString(char* s){
    char* left = s;
    char* right = s;
    while (*right!='\0')
    {
        right++;
    }
    right--;
    while(left<right){
        char temp = *left;
        *left = *right;
        *right = temp;

        left++;  
        right--;
    }
}

int main(){
    char ch[] = "Embedded";
    reverseString(ch);
    for(char c : ch){
        cout << c;
    }
    return 0;
}