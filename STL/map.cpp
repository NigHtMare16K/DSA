#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string> m;

    m[1]= "babbar";
    m[2]= "love";

    m.insert({5,"bheem"});

    for(auto i:m){
        cout<< i.first <<endl;
    }
}