#include<iostream>
#include<vector>
#include <cmath>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int sum = 0;
    int n = digits.size();
    for(int i =0;i<n;i++){
        if(i==n-1){
            sum = sum + digits[i];
        }
        else{
            int num = digits[i] * pow(10, n-i-1);
            sum = sum + num;
        }
    }
    sum = sum + 1;
    vector<int> ans;
    int x = sum;
    while(x>0){
        int rem = x%10;
        ans.push_back(rem);
        x= x/10;
    }

    return ans;
}

// int plusSum(vector<int>& digits){
//     int sum = 0;
//     int n = digits.size();
//     for(int i =0;i<n;i++){
//         if(i==n-1){
//             sum = sum + digits[i];
//         }
//         else{
//             int num = digits[i] * pow(10, n-i-1);
//             sum = sum + num;
//         }
//     }
//     sum = sum + 1;
//     return sum;
// }

int main(){
    vector<int> digits = {1,2,3};
    vector<int> a = plusOne(digits);
    for(int i =0; i<a.size();i++){
        cout<<a[i]<<endl;
    }

}