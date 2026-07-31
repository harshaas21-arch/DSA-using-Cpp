#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int digitalRoot(int num){
    if (num == 0)
       return 0;

    if (num % 9 == 0)
        return 9;

    return (num % 9);
}
int main(){
    int num = 123;
    cout << "Digital root of " << num << " is " << digitalRoot(num) << endl;
    return 0;
}