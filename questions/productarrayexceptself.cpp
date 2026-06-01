#include<iostream>
#include<vector>
using namespace std;

// vector<int> productExceptSelf(vector<int>& nums){
//     vector<int> ans;

//     for(int i = 0; i < nums.size(); i++){
//         int mul = 1;

//         for(int k = 0; k < nums.size(); k++){
//             if(k != i){
//                 mul *= nums[k];
//             }
//         }

//         ans.push_back(mul);
//     }

//     return ans;
// }

vector<int> productExceptSelf(vector<int>& nums){
    vector<int> ans;
    
}

int main(){
    vector<int> nums = {1,2,3,4};

    vector<int> res = productExceptSelf(nums);

    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
}