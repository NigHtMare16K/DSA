#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    // cout<<"Address of first memory block is "<<&arr[0]<<endl;

    // cout<<"4th "<< *arr<<endl;
    // cout<<"4th "<< *arr +1<<endl;
    // cout<<"4th "<< *(arr +1)<<endl;
    // cout<<"4th "<< *(arr +2)<<endl;
    // cout<<"4th "<< *(arr) +1<<endl;

    // int i = 3;
    // cout<<i[arr];

    int temp[10];
    cout<<sizeof(temp)<<endl;

    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
}