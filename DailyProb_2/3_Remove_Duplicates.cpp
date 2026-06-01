#include<iostream>
#include<vector>
using namespace std;

// int removeDuplicates(vector<int>& nums) {
//     int i = 0;
//     int j = 0;
//     int count = 0;
//     while(i<nums.size() && j<nums.size()){

//         if(nums[i] == nums[i+1]){
//             count++;
//             nums[j] = nums[i];
//             i++;
//             j++;
//         }
//         if(count > 2){
//             j = (i+1) - (count-2);
//         }else{
//             i++;
//             j++;
//         }
//     }       
//     return j; 
// }

int removeDuplicates(vector<int>& nums) {
    int j = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (j < 2 || nums[i] != nums[j - 2]) {
            nums[j] = nums[i];
            j++;
        }
    }

    return j;
}

int main(){
    vector<int> nums = {0,0,1,1,1,1,2,3,3};
    int a = removeDuplicates(nums);
    cout<<a<<endl;
}