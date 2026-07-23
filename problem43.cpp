#include<iostream>
using namespace std;

int* findMax(int* arr, int size){
    if(size <= 0 || arr == nullptr){
        return nullptr;
    }
    int *ptr;
    int *maxPtr = arr;
    for(int i=1; i<size; i++){
        ptr = arr+i;
        if(*ptr > *maxPtr){
            maxPtr = ptr;
        }
    }
    return maxPtr;
}
int main(){
    int arr[] = {12, 45, 7, 89, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr = findMax(arr, size);
    cout << "The maximum element is " << *ptr << " located at " << ptr << " " << &ptr << endl;
    return 0;

}