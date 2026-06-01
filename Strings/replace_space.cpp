#include<iostream>
using namespace std;

void replaceSpace(string &name, int n){
    for(int i =0; name[i] != '\0';i++){
        if(name[i] == ' '){
            name.replace(i,1,"@40");
            i+=2;
        }
    }
}

int main(){
    string name = "A B C";
    replaceSpace(name,5);
    cout<<name;
}