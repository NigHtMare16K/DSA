#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums){
    int n  = nums.size();
    int maj = n/2;

    int arr[n] = {0};

    for(int i = 0; i<n;i++){
        int j = nums[i];
        arr[j]++;
    }
    int ans;
    for(int i=0; i<n; i++){
        if(arr[i] > maj){
            ans = i;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2,1,2};
    int ans = majorityElement(nums);
    cout<<ans<<endl;
}