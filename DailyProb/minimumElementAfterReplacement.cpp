#include<iostream>
#include<vector>
using namespace std;

int minElement(vector<int>& nums) {
    int mini = INT_MAX;
    int i = 0;
    while(i<nums.size()){
        int num = nums[i]; 
        int sum = 0;
        while(num>0){
            int remainder = num%10;
            sum = sum +remainder;
            num = num/10; 
        }
        nums[i] = sum;
        if(nums[i]<mini){
            mini = nums[i];
        }
        i++;
    }  
    
    return mini;
}

int main(){
    vector<int> nums = {204,0,135,140};
    int a = minElement(nums);
    cout<<a<<endl;
}