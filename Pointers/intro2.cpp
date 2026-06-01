#include<iostream>
using namespace std;

int main(){
    // int i = 5;

    // int *p = 0;
    // p = &i;

    // cout<<*p<<endl;

    int num = 5;
    int a = num;
    a++;
    cout<<num<<endl;;

    int *p = &num;
    (*p)++;
    cout<<num<<endl;

    // Copying a pointer
    int *q = p;
    // cout<< p<<" "<<q<<endl;

    int i = 3;
    int *t = &i;
    // cout<<(*t)++<<endl;

    *t = *t+1;
    cout<<*t<<endl;
}