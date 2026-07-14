#include<iostream>
using namespace std;

double myPow(double x, int n){
    if(n==0){return 1.0;}
    
    if(n<0){
        x = 1 / x;
        n = -n;
    }

    double half = myPow(x, n/2);

    if(n%2 == 0){
        return half * half;
    }
    else{
        return x * half * half;
    }
}

int main(){
    double base = 2.0;
    int exp1 = 10;
    int exp2 = 9;

    cout << base << " ^ " << exp1 << " = " << myPow(base, exp1) << endl;
    cout << base << " ^ " << exp2 << " = "<< myPow(base, exp2) << endl;

    return 0;


}