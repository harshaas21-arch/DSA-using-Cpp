#include<iostream>
using namespace std;

void reverseArray(int *arr, int size){
    int *start = arr;
    int *end = arr + size - 1;
    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, size);
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}