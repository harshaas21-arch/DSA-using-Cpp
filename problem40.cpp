#include<iostream>
using namespace std;

int sumArray(const int* ptr, int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += *ptr;
        ptr++;
    }
    return sum;
}

int main(){
    int arr[] = {10,20,30,4,5,6};
    int *ptr = arr;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of array " << sumArray(ptr, size) << endl;

}