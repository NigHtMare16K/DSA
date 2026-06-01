#include<iostream>
#include<array>

using namespace std;

int main(){
    array<int,4> a = {2,4,8,9};

    int size = a.size();
    cout<<size<<endl;
    cout<<a.at(2);
}