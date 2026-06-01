#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {

    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size(); i++) {

        // Skip duplicate fixed elements
        if(i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int target = -nums[i];

        int j = i + 1;
        int k = nums.size() - 1;

        while(j < k) {

            int current = nums[j] + nums[k];

            if(current == target) {

                ans.push_back({nums[i], nums[j], nums[k]});

                j++;
                k--;

                // Skip duplicate j values
                while(j < k && nums[j] == nums[j - 1]) {
                    j++;
                }

                // Skip duplicate k values
                while(j < k && nums[k] == nums[k + 1]) {
                    k--;
                }

            }
            else if(current < target) {
                j++;
            }
            else {
                k--;
            }
        }
    }

    return ans;
}