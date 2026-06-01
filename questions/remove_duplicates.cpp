#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int k = 0;
    int i = 1;

    while(i < nums.size()){
        if(nums[i] == nums[k]){
            i++;
        }
        else{
            nums[k+1] = nums[i];
            k++;
            i++;
        }
    }
    return k+1;
}

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout << removeDuplicates(nums) << endl;
}