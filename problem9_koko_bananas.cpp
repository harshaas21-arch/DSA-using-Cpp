#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool canFinish(const vector<int>& piles, int h, int k){
    long long totalHours = 0;
    for(int pile : piles){
        totalHours += (pile + k - 1)/k;
    }
    return totalHours <= h;
}
int minEatingSpeed(const vector<int>& piles, int h){
    int low = 1;
    int high = 0;

    for(int pile : piles){
        high = max(high, pile);
    }
    int result = high;
    while (low <= high)
    {
       int mid = low + (high - low) / 2;
       if(canFinish(piles, h, mid)){
        result = mid;
        high = mid - 1;
       } else{
        low = mid + 1;
       }
    }
    return result;
}
int main(){
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    cout << "Minimum banana eating speed required: " << minEatingSpeed(piles, h) << "\n";

    return 0;
}