#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    int min = INT_MAX;
    int ans = 0;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; i++) {
        int j = i + 1;                  // FIX
        int k = nums.size() - 1;

        while (j < k) {                 // FIX
            int curr = nums[i] + nums[j] + nums[k];
            int diff = abs(curr - target);

            if (diff < min) {           // FIX
                min = diff;
                ans = curr;
            }

            if (curr == target) {       // FIX
                return curr;
            } else if (curr < target) {
                j++;
            } else {
                k--;                    // FIX
            }
        }
    }

    return ans;
}