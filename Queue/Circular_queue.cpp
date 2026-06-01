#include<iostream>
using namespace std;
#include<queue>

class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    CircularQueue(int n){
        size= 100001;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool push(int value){
        if( (front == 0 && rear == size=1) || (rear == (front-1)%(size-1))){
            cout<< "Queue is Full";
            return false;
        }else if(front==-1){
            front = rear = 0;
        }else if(rear = size-1 && front !=0){
            rear = 0;
        }else{
            rear++;
        }
        arr[rear] = value;
        return true;
    }
};