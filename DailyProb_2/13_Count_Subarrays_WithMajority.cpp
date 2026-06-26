#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// int countMajoritySubarrays(vector<int>& nums, int target) {
//     int start = 0;
//     int end = nums.size();
//     int count = 0;
//     for(int i = start;i<end;i++){
//         for(int j=i;j<end;j++){
//             vector<int> sub;
//             for(int k = i;k<=j;k++){
//                 sub.push_back(nums[k]);
//             }

//             int cnt = 0;
//             for(int a=0;a<sub.size();a++){
//                 if(sub[a] == target){
//                     cnt++;
//                 }
//             }

//             if(2*cnt > sub.size()){
//                 count++;
//             }
//         }
//     }

//     return count;
// }

int countMajoritySubarrays(vector<int>& nums, int target) {
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        int cnt = 0;

        for (int j = i; j < n; j++) {
            if (nums[j] == target)
                cnt++;

            int len = j - i + 1;

            if (2 * cnt > len)
                count++;
        }
    }

    return count;
}


int main(){
    vector<int> nums = {1,2,3};
    int target = 4;

    int b = countMajoritySubarrays(nums,target);
    cout<<b<<endl;
}