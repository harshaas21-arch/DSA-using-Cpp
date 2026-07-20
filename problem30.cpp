#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool isPalindrome(const string& s){
    int left = 0;
    int right = s.size()-1;

    while(left<right){
        while(left<right && !isalnum(s[left])){
            left++;
        }
        while(left<right && !isalnum(s[right])){
            right--;
        }
        if(tolower(s[left]) != tolower(s[right])){return false; }

        left++;
        right--;
    }
    return true;
}

int main(){
    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";

    cout << boolalpha; 
    cout << "Test 1: " << isPalindrome(s1) << "\n"; 
    cout << "Test 2: " << isPalindrome(s2) << "\n"; 

    return 0;
}