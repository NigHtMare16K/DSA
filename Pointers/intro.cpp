#include<iostream>
using namespace std;

int main(){
    int num = 5;

    cout<<"Address of num : "<<&num<<endl ;

    int *ptr = &num;
    cout<<"Value is :"<<*ptr<<endl;

    double d = 2.3;
    double *p2 = &d;

    cout<<"Address : "<< p2<<endl;
    cout<<"Value : "<< *p2<<endl;

    cout<<"Size of integer is "<< sizeof(num)<<endl;
    cout<<"Size of integer is "<< sizeof(ptr)<<endl;
    cout<<"Size of double is "<< sizeof(d)<<endl;
    cout<<"Size of double is "<< sizeof(p2)<<endl;
}