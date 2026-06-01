#include<iostream>
using namespace std;
#include<vector>

// vector<vector<int>> threeSum(vector<int>& nums){
//     vector<vector<int>> ans;
//     for(int i =0; i<nums.size();i++){
//         for(int j = i+1;j<nums.size();j++){
//             for(int k = j+1; k<nums.size();k++){
//                 if(nums[i] + nums[j] + nums[k] == 0){
//                  ans.push_back({nums[i], nums[j], nums[k]});
//                 }
//             }
//         }
//     }
//     return ans;
// }

vector<vector<int>> threeSum(vector<int>& nums){
    int i = 0;
    vector<vector<int>> ans;

    for(i;i<nums.size();i++){
        int dif = 0 - nums[i];
        int j = i+1;
        int k = nums.size() - 1;
        while(j<k){
            if(nums[j]+nums[k] == dif){
                ans.push_back({i,j,k});
                i++;
            }else{
                j++;
            }
        }
    }
}


int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    
    vector<vector<int>> res = threeSum(nums);

    for(int i = 0; i < res.size(); i++){
    for(int j = 0; j < res[i].size(); j++){
        cout << res[i][j] << " ";
    }
    cout << endl;
}
}