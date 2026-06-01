#include<iostream>
using namespace std;
#include<queue>

int main(){
    queue<int> q;
    q.push(11);
    q.push(15);
    cout<<"Front of queue is: "<<q.front()<<endl;
    q.push(13);

    cout<<"SIze of queue is :" <<q.size()<<endl;
    q.pop();
    cout<<"SIze of queue is :" <<q.size()<<endl;
}