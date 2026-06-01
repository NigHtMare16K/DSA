#include<iostream>
using namespace std;

bool isPalindrone(char name[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        if(name[s] != name[e]){
            return false;
            break;
        }
        s++;
        e--;
    }
    return true;
}

int main(){
    char name[20];
    cout<<"Enter your name" <<endl;
    cin>> name;

    cout<<"Your name is ";
    cout<<name<<endl;

    bool pal = isPalindrone(name,4);
    cout<<pal;
}