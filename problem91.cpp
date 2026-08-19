#include<iostream>
using namespace std;

int findMax(int *arr, int n){
    int max = *arr;
    for(int i=0; i<n; i++){
        if(*(arr) > max){
            max = *(arr);
            arr++;
        }
        else{
            arr++;
        }
    }
    return max;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int *ptr = arr;
    int result = findMax(ptr, n);
    cout << result;
    return 0;
}