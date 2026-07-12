#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    int n = arr.size();

    cout << "First element : " << arr[0] << endl;

    for(int x : arr){
        cout << x << " " << endl;
    }
}
