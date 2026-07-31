#include <iostream>
#include <vector>
using namespace std;

int divisorCount(int num) {
    int cnt = 0;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cnt++;
        }
    }

    return cnt;
}

vector<int> threeDivisors(vector<int>& queries) {
    vector<int> ans;

    for (int n : queries) {

        int total = 0;

        for (int num = 1; num <= n; num++) {

            if (divisorCount(num) == 3) {
                total++;
            }
        }

        ans.push_back(total);
    }

    return ans;
}

int main() {
    vector<int> queries = {6, 10, 100};

    vector<int> ans = threeDivisors(queries);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}