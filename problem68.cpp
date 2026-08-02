#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string, int> m;
    int q;
    cin >> q;
    string n;
    int x,y;
    int i=0;
while(i!= q){
        cin >> x;
        if(x==1){
            cin >> n >> y;
            m[n] += y;
        }
        else if(x==2){
            cin >> n;
            m.erase(n);
        }
        else if(x==3){
            cin >> n;
            cout << m[n] << endl;
        }
i++;
}
    return 0;
}



