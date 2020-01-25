/*
    Write a function template selection Sort.
    Write a program that inputs, sorts and outputs an integer array and
    a float array.
*/

#include <iostream>
using namespace std;

template <class T>
class SelectionSort{ //Class Template
	int n;
	T *arr = NULL;
public:
	void getN(){
		cout<<"\nEnter the number of elements in your array : ";
		cin>>n;
		arr = new T[n];
	}
	void getArr(){
		cout<<"Enter the elements in the array : "<<endl;
		for(int i=0; i<n; i++){
			cout<<"Enter Element "<<i+1<<" : ";
			cin>>arr[i];
		}
	}
	void sort(){
		int min;
		T temp;
		for(int i=0; i<n-1; i++){
			min = i;
			for(int j=i+1; j<n; j++){
				if(arr[j] < arr[min])
					min = j;
			}
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
	void display(){
		cout<<"\nThe sorted array is : "<<endl;
		for(int i=0; i< n; i++)
			cout<<arr[i]<<" ";
	}
	~SelectionSort(){
		delete []arr;
	}
};
int main() {
	int ch;
	SelectionSort <int> ob1;
	SelectionSort <float> ob2;
	cout<<"------------------------------List of Operations------------------------------"<<endl;
	cout<<"1. Selection Sort on Integer Array\n2. Selection Sort on Float Array"<<endl;
	cout<<"Enter your choice (1 or 2) : ";
	cin>>ch;
	switch(ch){
	case 1:
		ob1.getN();
		ob1.getArr();
		ob1.sort();
		ob1.display();
		break;
	case 2:
		ob2.getN();
		ob2.getArr();
		ob2.sort();
		ob2.display();
		break;
	default:
		cout<<"\nInvalid Choice!!\nPlease follow instructions next time.";
	}
	return 0;
}
