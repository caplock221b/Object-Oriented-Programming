// Write C++ program using STL for implementation of stack & queue.
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Stack{
    stack <int> s;
public:
    void push(int data){
        s.push(data);
    }
    void pop(){
        if(!s.empty())
            s.pop();
    }
    void display(){
        stack <int> sCopy = s;
        cout<<"Top ->";
        int ctr=1;
        while(!sCopy.empty()){
            if(ctr==1)
                cout<<"| "<<sCopy.top()<<" |"<<endl;
            else
                cout<<"      | "<<sCopy.top()<<" |"<<endl;
            sCopy.pop();
            ctr++;
        }
    }
    int top(){
        return s.top();
    }
    int sizeOfStack(){
        return s.size();
    }
};
class Queue{
    queue <int> q;
public:
    void enqueue(int data){
        q.push(data);
    }
    void dequeue(){
        if(!q.empty())
            q.pop();
        else
            cout<<"Queue is empty!";
    }
    int elementAtFront(){
        return q.front();
    }
    int elementAtRear(){
        return q.back();
    }
    int sizeOfQueue(){
        return q.size();
    }
    void display(){
        queue <int> qCopy = q;
        while(!qCopy.empty()){
            cout<<qCopy.front()<<" | ";
            qCopy.pop();
        }
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();
    s.pop();
    s.pop();
    s.pop();
    cout<<"\n";
    s.display();
    cout<<"\nSize of Stack is "<<s.sizeOfStack();
    cout<<"\nElement at Top of Stack is "<<s.top();

    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<"\n\n";
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout<<"\n\n";
    q.display();
    cout<<"\nSize of Queue is "<<q.sizeOfQueue();
    cout<<"\nElement at front of queue is "<<q.elementAtFront()<<endl;
    cout<<"\nElement at rear of queue is "<<q.elementAtRear();
    return 0;
}
