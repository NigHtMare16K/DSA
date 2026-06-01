#include<iostream>
#include<vector>

using namespace std;

// void SelectionSort(vector<int>& a, int n){
//     for(int i=0; i<n; i++){
//         int minIndex = i;
//         for(int j = i+1; j<n;j++){
//             if(a[j]<a[minIndex]){
//                 minIndex = j;
//             }
//         }
//         swap(a[i],a[minIndex]);
//     }
// }

// void MergaArray(vector<int>& a, vector<int>& b, int n, int m){
//     for(int i=0;i<b.size();i++){
//         a.push_back(b[i]);
//     }


//     SelectionSort(a,10);

// }


// Wrong 
// void MergeArray(vector<int>& a, vector<int>& b, int n, int m, vector<int>& c){
//     int i = 0;
//     int j = 0;
//     int k = 0;

//     while(i<n && j<m){
//         if(a[i]<b[j]){
//             c[k] = a[i];
//             i++;
//             k++;
//         }
//         else{
//             c[k] = b[j];
//             j++;
//             k++;
//         }
//     }

//     while(i<n){
//         c[k] = a[i];
//         k++;
//         i++;
//     }
//     while(j<m){
//         c[k] = b[j];
//         k++;
//         j++;
//     }
// }

void MergeArray(vector<int>& a, vector<int>& b, int n, int m){
    int k = n;
    for(int j =0;j<m;j++){
        for(int i = 0;i<n;i++){
            if(b[j]>a[i]){
                i++;
            }
            if(b[j] <= a[i]){
                
            }
        }
    }
}

int main(){
    vector<int> a = {1,3,5,7,9};
    vector<int> b = {2,4,6,8,10};
    vector<int> c(10);

    MergeArray(a,b,5,5);

    for(int i =0; i<10; i++){
        cout<<c[i]<<endl;
    }
}