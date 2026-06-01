#include<iostream>
#include<vector>

using namespace std;

// Vector is dynamic
int main(){
    vector<int> v;
    vector<int> a(5,1);

    v.push_back(1);
    v.push_back(6);
    v.push_back(4);

    cout<<v.capacity()<<endl;
}