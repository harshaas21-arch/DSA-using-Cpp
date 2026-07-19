#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
string input = str;
stringstream ss(input);
string token;
vector<int> numbers;

while(getline(ss, token, ',')){
    numbers.push_back(stoi(token));
}
return numbers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}