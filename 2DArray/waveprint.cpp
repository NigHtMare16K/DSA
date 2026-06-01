#include<iostream>
using namespace std;

// int waveprint(int arr[][3], int n, int m){
//     for(int i = 0; i<m;i++){
//         int j = 0;
//         if(j==0){
//             for(int j=0;j<n;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         else{
//             for(int j =n;j>0;j--){
//                 cout<<arr[i][j]<< " ";
//             }
//         }
//     }
// }

void waveprint(int arr[][3], int n, int m){
    for(int i = 0; i < m; i++){

        if(i % 2 == 0){
            for(int j = 0; j < n; j++){
                cout << arr[j][i] << " ";
            }
        }
        else{
            for(int j = n-1; j >= 0; j--){
                cout << arr[j][i] << " ";
            }
        }
    }
}

int main(){
    int arr[3][3] = {1,5,9,4,8,16,27,8,99};

    waveprint(arr,3,3);
}