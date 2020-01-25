/*
    Implement a class Quadratic that represents degree two polynomials i.e., polynomials of type ax^2+bx+c.
    The class will require three data members corresponding to a, b and c. Implement the following operations:
        1. A constructor (including a default constructor which creates the 0 polynomial).
        2. Overloaded operator + to add two polynomials of degree 2.
        3. Overloaded << and >> to print and read polynomials. To do this, you will need to decide what you want your input
           and output format to look like.
        4. A function eval that computes the value of a polynomial for a given value of x.
        5. A function that computes the two solutions of the equation ax^2+bx+c=0.
*/
#include <iostream>
#include <math.h>
using namespace std;

class Quadratic{
	int a, b, c;
public:
	Quadratic(){
		a=b=c=0;
	}
	friend istream& operator >> (istream &in, Quadratic &ob){
		cout<<"\tEnter value of a : ";
		in>>ob.a;
		cout<<"\tEnter value of b : ";
		in>>ob.b;
		cout<<"\tEnter value of c : ";
		in>>ob.c;
		return in;
	}
	friend ostream& operator << (ostream &out, Quadratic &ob){
	    char super = 253;
		if(ob.b>=0 && ob.c>=0)
			cout<<"The answer is : "<<ob.a<<"x"<<super<<" + "<<ob.b<<"x + "<<ob.c<<" = 0"<<endl;
		else if(ob.b<0 && ob.c>=0){
			ob.b = -ob.b;
			cout<<"The answer is : "<<ob.a<<"x"<<super<<" - "<<ob.b<<"x + "<<ob.c<<" = 0"<<endl;
			ob.b = -ob.b;
		}
		else if(ob.b>=0 && ob.c<0){
			ob.c = -ob.c;
			cout<<"The answer is : "<<ob.a<<"x"<<super<<" + "<<ob.b<<"x - "<<ob.c<<" = 0"<<endl;
			ob.c = -ob.c;
		}
		else{
			ob.b = -ob.b;
			ob.c = -ob.c;
			cout<<"The answer is : "<<ob.a<<"x"<<super<<" - "<<ob.b<<"x - "<<ob.c<<" = 0"<<endl;
			ob.b = -ob.b;
			ob.c = -ob.c;
		}
	}
	Quadratic operator + (Quadratic ob){
		Quadratic temp;
		temp.a = this->a + ob.a;
		temp.b = this->b + ob.b;
		temp.c = this->c + ob.c;
		return temp;
	}
	int eval (int x){
		return ((a*x*x) + (b*x) + c);
	}
	void findRoots(){
		int D = (b*b)-(4*a*c);
		if(D<0)
			cout<<"The roots are imaginary."<<endl;
		else{
			float r1 = (-b-sqrt(D))/(2*a);
			float r2 = (-b+sqrt(D))/(2*a);
			cout<<"The roots of the equation are : "<<r1<<", "<<r2<<endl;
		}
	}
};
int main(){
	Quadratic ob1, ob2, ob3;
	int choice;
	char super = 253;
	cout<<"Enter details of quadratic equation (ax"<<super<<" + bx + c):"<<endl;
	cin>>ob1;
	cout<<"------------------Choice List------------------"<<endl;
	cout<<"1. Add two quadratic equations."<<endl;
	cout<<"2. Compute value of quadratic at a particular value of x."<<endl;
	cout<<"3. Find the roots of the given quadratic equation."<<endl;
	cout<<"\nWhat operation would you like to perform ? Enter 1, 2 or 3 : ";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"\nEnter details of second quadratic equation (ax"<<super<<" + bx +c):"<<endl;
			cin>>ob2;
			ob3 = ob1 + ob2;
			cout<<ob3;
			break;
		case 2:
			int x;
			cout<<"\nEnter the value of variable x : ";
			cin>>x;
			cout<<"The value of quadratic at x = "<<x<<" is "<<ob1.eval(x)<<"."<<endl;
			break;
		case 3:
			ob1.findRoots();
			break;
		default:
			cout<<"\nInvalid Choice!! Please enter correct choice next time.";
	}
}
