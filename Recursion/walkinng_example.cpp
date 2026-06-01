#include <iostream>
#include <vector>
using namespace std;

void reachHome(int src, int dest){

    cout<<"source" << src << "destination" << dest <<endl;
    if(src == dest){
        cout<<"Reached Home"<<endl;
        return;
    }

    src++;
    reachHome(src, dest);
}

int main(){
    int dest = 10;
    int src = 1;

    reachHome(src, dest);
}