#include<iostream>
using namespace std;
#include<stack>
#include<vector>
#include <algorithm>

// vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
//     vector<int> ans;
//     int i = 0;
//     while(i<A.size() || i<B.size()){
//         int j = 0;
//         int k = 0;
//         int count = 0;
//         while(j<i||k<i){
//             if(A[j]==B[k]){
//                 count++;
//                 j++;
//                 k++;
//             }else if(A[j]<B[k]){
//                 j++;
//             }else{
//                 k++;
//             }
//         }
//         ans.push_back(count);
//     }
//     return ans;
// }

vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    vector<int> ans;
    for(int i =0;i<A.size();i++){
        vector<int> arr(A.size() + 1, 0);
        int j = 0;
        int k =0;
        while(j<=i && k<=i){
            int p = A[j];
            int q = B[k];
            arr[p]++;
            arr[q]++;
            j++;
            k++;
        }
        int count = 0;
        for(int m=0;m<arr.size();m++){
            if(arr[m]==2){
                count++;
            }
        }
        ans.push_back(count);
    }   
    return ans;     
}

int main(){
    vector<int> A = {1,3,2,4};
    vector<int> B = {3,1,2,4};
    vector<int> ans = findThePrefixCommonArray(A, B);

    for(int x : ans){
        cout << x << " ";
    }
}