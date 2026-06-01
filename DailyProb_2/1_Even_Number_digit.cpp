#include<iostream>
#include<vector>
using namespace std;

int findNumbers(vector<int>& nums) {
    int count = 0;
    int i = 0;
    while(i<nums.size()){
        int num = nums[i];
        int s = 0;
        if(num == 0)
            s = 1;
        else {
            while(num > 0) {
                num /= 10;
                s++;
            }
        }
        if(s%2==0){
            count++;
        }
        i++;
    } 
    return count;       
}

int main(){
    vector<int> nums = {0,345,22,6,7896};
    int a = findNumbers(nums);
    cout<<a<<endl;
}