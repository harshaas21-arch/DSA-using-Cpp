#include<iostream>
using namespace std;

bool isVowel(char c){
    c = (c>= 'A' && c<= 'Z') ? (c+32) : c;
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
void removeVowels(char* s){
    if(!s || *s == '\0') return;

    char* read = s;
    char* write = s;

    while(*read != '\0'){
        if(!isVowel(*read)){
            *write = *read;
            write++;
        }
        read++;
    }
    *write = '\0';
}
int main(){
    char ch[] = "batman";
    removeVowels(ch);
    for(char c : ch){
        cout << c;
    }
    cout << "\n";
    return 0;
}