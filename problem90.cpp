#include<iostream>
using namespace std;

void swapValues(int* a, int* b){
   int temp = *a;
   *a = *b;
   *b = temp;
   cout << *a << " " << *b;
}
int main(){
    int n1, n2;
    cin >> n1 >> n2;
    swapValues(&n1, &n2);
    return 0;
}