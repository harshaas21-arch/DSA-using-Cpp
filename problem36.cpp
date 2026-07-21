#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int max_water = 0;

    while (left < right) {
        
        int h = min(height[left], height[right]);
        int w = right - left;
        int current_area = h * w;

        max_water = max(max_water, current_area);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_water;
}

int main() {
    vector<int> test1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    vector<int> test2 = {1, 1};

    cout << "Test 1 Output: " << maxArea(test1) << " (Expected: 49)\n";
    cout << "Test 2 Output: " << maxArea(test2) << " (Expected: 1)\n";

    return 0;
}