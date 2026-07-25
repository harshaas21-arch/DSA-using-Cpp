#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> transpose(const vector<vector<int>>& matrix, int rows, int cols){
    vector<vector<int>> result(cols, vector<int>(rows));
    for(int r=0; r<rows; r++){
        for(int c=0; c<cols; c++){
            result[c][r] = matrix[r][c];
        }
    }
    return result;
}

int main(){
    vector<vector<int>> matrix;
    cout<<"Enter the no of rows: " << endl;
    int rows, cols;
    cin >> rows;
    cout << "Enter the no of cols: " << endl;
    cin >> cols;
    matrix.resize(rows, vector<int>(cols));
    for(int r=0; r<rows; r++){
        for(int c=0; c<cols; c++){
            cin >> matrix[r][c];
        }
    }
    vector<vector<int>> result = transpose(matrix, rows, cols);
    cout << "Transpose matrix: " << endl;
    for(const auto& row : result){
        for(int val : row){
            cout << val << " ";
        }
        endl(cout);
    }
    return 0;
}