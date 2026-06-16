#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();

    int zero = 0;
    int ones = 0;
    int twos = 0;

    for(int i= 0; i<n; i++){
        if(nums[i] ==0){
            zero++;
        }else if(nums[i] == 1){
            ones++;
        }else{
            twos++;
        }
    }

    int i = 0;

    while(zero--) nums[i++] = 0;
    while(ones--) nums[i++] = 1;
    while(twos--) nums[i++] = 2;

}   

int main(){
    vector<int> nums = {2,0,1};
    sortColors(nums);
    for(int i=0; i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}