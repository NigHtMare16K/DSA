#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> s;

    s.push("Ashu");
    s.push("Kumar");
    s.push("Kartik");

    s.pop();
    s.top();
}