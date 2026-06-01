#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> q;

    q.push("Ashu");
    q.push("Rahul");
    q.push("Ashmit");

    cout<<q.front();
}