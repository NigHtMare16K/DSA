#include<iostream>
using namespace std;
#include<stack>
#include<vector>


// int getCommon(vector<int>& nums1, vector<int>& nums2) {
//     int i = 0;
    
//     for(i;i<nums1.size();i++){
//         int j = 0;
//         while(j<nums2.size()){
//             if(nums1[i]==nums2[j]){
//                 return nums1[i];
//             }else{
//                 j++;
//             }
//         }
//     }

//     return -1;
// }

// Two pointer approach

int getCommon(vector<int>& nums1, vector<int>& nums2) {
    int i = 0;
    int j  = 0;
      
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]==nums2[j]){
            return nums1[i];
        }else if(nums1[i]<nums2[j]){
            i++;
        }else{
            j++;
        }
    }

    return -1;
}

int main(){
    vector<int> nums1= {1,2,3,8,14};
    vector<int> nums2= {8,13};

    cout<<getCommon(nums1,nums2)<<endl;
}