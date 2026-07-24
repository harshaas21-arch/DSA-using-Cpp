#include<iostream>
using namespace std;

bool isPalindrome(int* arr, int size){
    int *start = arr;
    int *end = arr + size - 1;
    if(size == 0 || arr == nullptr){
        return false;
    }
    while(start < end){
        if(*start == *end){
        start++;
        end--;
        }
        else{
            return false;
        }
    }
        return true;
}
int main(){
    int arr[] = {1,2,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << boolalpha;
    cout << "The array is a palindrome: " << isPalindrome(arr, size) << endl;
    return 0;
}