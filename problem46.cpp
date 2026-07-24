#include<iostream>
#include<vector>
using namespace std;

vector<int> filterEvens(const vector<int>& input){
    vector<int> result;
    for(int i : input){
        if(i%2 == 0){
            result.push_back(i);
        }
    }
    for(int j : result){
        cout << j << " " ;
    }
}

int main(){
    vector<int> input;
    int size;
    cin >> size;
    for(int i=0; i<size; i++){
        int temp;
        cin >> temp;
        input.push_back(temp);
    }

    filterEvens(input);
    return 0;
}