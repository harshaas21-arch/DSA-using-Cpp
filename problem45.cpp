#include<iostream>
using namespace std;

void seperateEvenOdd(int* arr, int size){
    int *left = arr;
    int *right = arr + size - 1;

    while(left < right){
        if(*left % 2 == 0 || *right % 2 != 0){
            left++;
            right--;
        }
        else if(*left % 2 != 0 || *right % 2 == 0){
            int temp = *left;
            *left = *right;
            *right = temp;
            left++;
            right--;
        }
    }
}
int main(){
    int arr[] = { 12,3,5,8,10,7,6,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    seperateEvenOdd(arr, size);
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}