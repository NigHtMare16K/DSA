#include<iostream>
#include<list>
// Duobly linked list is Implemented

using namespace std;

int main(){
    list<int> l;
    list<int> n(5);

    l.push_back(7);
    l.push_front(9);

    for(int i:l){
        cout<<i<<" ";
    }

    l.erase(l.begin());
}