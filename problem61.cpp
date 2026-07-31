#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int power(int num, int times){
    int ans = 1;
    for(int i=0; i<times; i++){
        ans *= num;
    }
    return ans;
}
bool findArmstrongNum(int num){
    int orig = num;
    vector<int> digits;
    int result = 0;
    while(num>0){
        digits.push_back(num%10);
        num /= 10;
    }
    reverse(digits.begin(), digits.end());
    int n = digits.size();
    // cout << n << endl;
    for(int i : digits){
        result += power(i, n);
    }
    cout << result << endl;
    if(orig == result){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num = 123;
    cout << boolalpha;
    cout << "The number " << num << " is Armstrong number: " << findArmstrongNum(num) << endl;
    return 0;
}