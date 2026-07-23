#include<iostream>
using namespace std;

int countOccurences(const int* ptr, int size, int target){
    int count = 0;
    for(int i=0; i<size; i++){
        if(*ptr == target){
            count++;
            ptr++;
        } else{ptr++;}
    }
    
    return count;
}

int main(){
    int arr[] = {4,2,7,2,9,2,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 2;
    int *ptr = arr;
    cout << "The number of occurences of " << target << " is " << countOccurences(ptr, size, target) << endl;
    return 0;
}