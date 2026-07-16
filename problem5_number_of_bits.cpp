#include<iostream>

using namespace std;

int hammingWeight(uint32_t n){
    int count = 0;

    // Brian Kernighan's Algorithm

    while(n!=0){
        n = n & (n-1);
        count++;
    }
    return count;
}
int main(){
    uint32_t num = 15;
    cout << "The number of set bits in " << num << " is: " << hammingWeight(num) << "\n";
    return 0;
}