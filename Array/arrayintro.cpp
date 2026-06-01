#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<< "Printing the array"<< endl;

    for (int i=0; i<size; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
    cout<<"Printing Done"<<endl;

}

int main(){
    int number[15];

    // cout<< "Value is"<< number[0]<<endl;

    int second[3] = {5,7,11};
    cout<< second[2]<<endl;
    // printArray(second,3);

    int third[15] = {4,7};

    // int n = 15;
    // for (int i=0; i<n; i++){
    //     cout<< third[i]<< " ";
    // }

    char ch[5] = {'a','b','c','d','e'};
    cout<<ch[2]<<endl;

    for(int i=0; i<5; i++){
        cout<<ch[i]<< " ";
    }

    
}