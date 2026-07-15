#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix){
    if(matrix.empty()) return {};
    int m = matrix.size(); // Rows
    int n = matrix[0].size(); // Columns
    vector<int> result;
    // Boundaries
    int top = 0, bottom = m-1, left = 0, right = n-1;

    while(top<=bottom && left<=right){
        for(int i=left; i<=right; i++){
            result.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top; i<=bottom; i++){
            result.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
        for(int i=right; i>=left; i--){
            result.push_back(matrix[bottom][i]);
        }
        bottom--;}
        if(left<=right){
        for(int i=bottom; i>=top; i--){
            result.push_back(matrix[i][left]);
        }
        left++;}
    }
    return result;
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout << "Program started" << endl;

    vector<vector<int>> matrix = {
        {1, 2, 3, 10},
        {4, 5, 6, 11},
        {7, 8, 9, 12},
        {13, 14, 15, 16}
    };

    vector<int> ans = spiralOrder(matrix);

    for(int x : ans){
        cout << x << " ";
    }
    cout << "\n";

    cout << flush;

    return 0;
}