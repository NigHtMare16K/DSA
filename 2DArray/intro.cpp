#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int n, int m){
    for(int i = 0; i<n; i++){
        for(int j =0; j<m; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

void rowSum(int arr[][4], int n, int m, int result[]){
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j =0; j<m;j++){
            sum += arr[i][j];
        }
        result[i] = sum;
    }
}

int main(){
    int arr[3][4];
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    // ROW WISE Input
    // for(int i=0; i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // Column wise Input
    // for(int i=0; i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }

    for(int i=0; i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr2[i][j] << " ";
        }
        cout<<endl;
    }

    cout<<"Enter element to search"<< endl;
    int target;
    cin>>target;

    if(isPresent(arr1, target, 3,4)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    int result[3];
    rowSum(arr1,3,4,result);

    for(int i =0; i<3;i++){
        cout<<result[i]<<" ";
    }

}