#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d;

    d.push_back(4);
    d.push_front(5);

    for(int i:d){
        cout<<i<<" ";
    }

    d.pop_back();

    for(int i:d){
        cout<<i<<" ";
    }
}