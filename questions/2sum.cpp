#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target){
    vector<int> ans;

    for(int i = 0; i < numbers.size(); i++){
        int t = target - numbers[i];

        int s = i + 1;
        int e = numbers.size() - 1;

        while(s <= e){
            int mid = s + (e - s) / 2;

            if(numbers[mid] == t){
                ans.push_back(i + 1);
                ans.push_back(mid + 1);
                return ans;
            }

            if(numbers[mid] > t){
                e = mid - 1;
            } 
            else{
                s = mid + 1;
            }
        }
    }

    return ans;
}

int main(){

    vector<int> numbers = {2,7,11,15};
    int target = 13;

    vector<int> result = twoSum(numbers, target);

    if(result.size() == 2){
        cout << "Indices: " << result[0] << " " << result[1];
    }
    else{
        cout << "No pair found";
    }

    return 0;
}