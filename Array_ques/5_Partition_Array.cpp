#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> pivotArray(vector<int>& nums, int pivot) {
    vector<int> left;
    vector<int>right;

    int count =0;
    for(int i=0;i<nums.size(); i++){
        if(nums[i] == pivot){
            count++;
        }else if(nums[i]<pivot){
            left.push_back(nums[i]);
        }else{
            right.push_back(nums[i]);
        }
    }

    for(int i=0;i<left.size();i++){
        nums[i] = left[i];
    }

    for(int i=left.size();i<left.size()+count;i++){
        nums[i] = pivot;
    }

    int m = left.size() + count;
    int j =0;
    while(m<nums.size()){
        nums[m] = right[j];
        j++;
        m++;
    }

    return nums;

}

int main(){
    vector<int> nums = {-3,4,3,2};
    int pivot = 2;

    vector<int> left = pivotArray(nums,pivot);
    for(int i=0; i<left.size();i++){
        cout<<left[i]<<" ";
    }
}