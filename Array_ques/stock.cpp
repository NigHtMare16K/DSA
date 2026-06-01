#include<iostream>
#include<vector>
using namespace std;

// int maxProfit(vector<int>& prices) {
//     int min = 0;
//     int n = prices.size();
//     for(int i = 0;i<n-1;i++){
//         int m = prices[i];
//         for(int j =i+1;j<n;j++){
//             int sub = 0;
//             if(prices[j]>m){
//                 sub  = prices[j] - m;
//             }else{
//                 continue;
//             }
//             if(sub>min){
//                 min = sub;
//             }
//         }
//     }
//     return min;
// }

int maxProfit(vector<int>& prices){
    int max = 0;
    int n = prices.size();
    int i = 0;
    int j = n-1;
    while(i<n-1 && j>0){
        if(prices[i]<prices[j]){
            int sub = prices[j] - prices[i];
            if(sub>max){
                max= sub;
            }
            i++;
        }else{
            i++;
        }
        if(i==n-2){
            i = 0;
            j--;
        }
    }
}

int main(){
    vector<int> prices = {7,6,5,4,3,2};
    int ans = maxProfit(prices);
    cout<<ans<<endl;

}