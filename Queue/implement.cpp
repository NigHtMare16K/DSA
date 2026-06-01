#include<iostream>
using namespace std;
#include<queue>

class Queue{
    int *arr;
    int front;
    int rear;
    int size;
public:
    Queue(){
        size = 100001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data){
        if(rear == size){
            cout<<"Queue is full"<<endl;
        }else{
            arr[rear] = data;
            rear++;
        }
    }
    
    int pop(){
        if(front==rear){
            return -1;
        }else{
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if(front==rear){
                front =0;
                rear=0;
            }
            return ans;
        }
    }

    int qfront(){
        if(front==rear){
            return -1;
        }else{
            return arr[front];
        }
    }

    bool isEmpty(){
        if(front==rear){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    Queue q;
    q.push(45);
    q.push(33);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
}