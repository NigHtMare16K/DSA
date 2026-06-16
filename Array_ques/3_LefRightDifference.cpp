#include<iostream>
#include<vector>
using namespace std;

vector<int> leftRightDifference(vector<int>& nums) {
    vector<int> leftSum(nums.size());
    vector<int> rightSum(nums.size());

    int sum = 0;
    for(int i =0; i<nums.size(); i++){
        sum = sum + nums[i];
    }

    int leftsum =0;
    int rightsum = 0;
    for(int i=0; i<nums.size();i++){
        if(i==0){
            leftSum[i] = 0;
            rightsum = sum - leftSum[i] - nums[i];
            rightSum[i] = rightsum;
        }
        else if(i == nums.size()-1){
            rightSum[i] = 0;
            leftsum = leftSum[i-1] + nums[i-1];
            leftSum[i] = leftsum;
        }
        else{
            leftsum = leftSum[i-1] + nums[i-1];
            leftSum[i] = leftsum;
            rightsum = sum - leftSum[i] - nums[i];
            rightSum[i] = rightsum;
        }
    }

    for(int i=0; i<nums.size(); i++){
        nums[i] = abs(rightSum[i] - leftSum[i]);
    }

    return nums;

}