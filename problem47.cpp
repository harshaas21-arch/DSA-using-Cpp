#include<iostream>
#include<vector>
using namespace std;

void removeTarget(vector<int>& vec, int target){
    auto it = vec.begin();
    while(it != vec.end()){
        if(*it == target){
            it = vec.erase(it);
        }
        else{
            ++it;
        }
    }
    for(int i : vec){
        cout << i << " ";
    }
}
int main(){
    int size;
    cout << "Enter size: "<< endl;
    cin >> size;
    int target;
    cout << "Enter target: " << endl;
    cin >> target;
    vector<int> input;
    for(int i=0; i<size; i++){
        int temp;
        cin >> temp;
        input.push_back(temp);
    }
    removeTarget(input, target);
    return 0;

}