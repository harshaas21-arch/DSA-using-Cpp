#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

int main() {
    int T; cin >> T;
    
    while(T--) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;

        long long int_A = static_cast<long long>(A);
        cout << "0x" << hex << nouppercase << int_A << endl;

        cout << dec << fixed << setprecision(2);
        cout << setw(15) << setfill('_') << right << showpos << B << endl;

        cout << scientific << uppercase << noshowpos << setprecision(9) << C << endl;
    }
    return 0;
}
