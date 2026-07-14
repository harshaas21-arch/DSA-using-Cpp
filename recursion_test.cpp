#include<iostream>
using namespace std;

int factorial(int val){
    int data = val;

    if(data == 1){
        return 1;
    }
    else{
        return data * factorial(data-1);
    }
}

int main(){
    int number = 5;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;

    return 0;
}