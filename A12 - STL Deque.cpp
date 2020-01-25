// Write C++ program using STL for Dequeue (Double ended queue).

#include <iostream>
#include <deque>
#include <iterator>

using namespace std;

class Deque {
    deque <int> deq;
    deque <int> :: iterator it;
public:
    void pushFront(int data){
        deq.push_front(data);
    }
    void pushBack(int data){
        deq.push_back(data);
    }
    void popFront() {
        if (deq.empty()){
            cout << "Error! Deque is empty"<<endl;
        }
        else {
            deq.pop_front();
        }
    }
    void popBack() {
        if (deq.empty()){
            cout << "Error! Deque is empty"<<endl;
        }
        else {
            deq.pop_back();
        }
    }
    void display () {
        for (it=deq.begin(); it!=deq.end(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    }
};

int main()
{
    Deque obj;
    int choice;
    char ch;
    cout << "Choose\n 1)Push Front\n 2)Push Back\n 3)Pop Front\n 4)Pop Back\n 5)Display deque"<<endl;
    do{
        cout << "Enter choice"<<endl;
        cin>> choice;
        switch (choice) {
        case 1:
            int fro;
            cout << "Enter the number to be added at the front"<<endl;
            cin>>fro;
            obj.pushFront(fro);
            break;
        case 2:
            int bac;
            cout << "Enter the number to be added at the back"<<endl;
            cin>>bac;
            obj.pushBack(bac);
            break;
        case 3:
            obj.popFront();
            break;
        case 4:
            obj.popBack();
            break;
        case 5:
            cout << "The deque is ";
            obj.display();
            break;
        default:
            cout << "Invalid number entered!";
        }
        cout << "Do you want to continue?(Y or N)"<<endl;
        cin>>ch;
    } while (ch!='N' && ch!='n');
    return 0;
}
