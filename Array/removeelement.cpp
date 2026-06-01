#include<iostream>
using namespace std;
#include<vector>

// int removeElement(vector<int>& nums, int val){
//     int i = 0;
//     while(i<nums.size()-1){
//         if(nums[i]==val){
//             if(nums[i+1]!=val){
//                 swap(nums[i],nums[i+1]);
//                 i++;
//             }
//             else{
//                 for(int j=i+1;j<nums.size();j++){
//                     if(nums[j] != val){
//                         swap(nums[i],nums[j]);
//                         break;
//                     }
//                 }
//                 i++;
//             }
//         }
//         else{i++;}
//     }
//     int count = 0;
//     for(int i =0; i<nums.size();i++){
//         if(nums[i] != val){
//             count++;
//         }else{
//             break;
//         }
//     }
//     return count;
// }

int removeElement(vector<int>& nums, int val){
    int k = 0;
    for(int i = 0; i<nums.size();i++){
        if(nums[i] !=val){
            nums[k++] = nums[i];
        }
    }
    return k;
}

int main(){
    vector<int> nums = {1,5,7,7,0,0,7};

    cout<<removeElement(nums,7);
}