/*
	Implement the following operations:
        1. Constructor (including a default constructor which creates the complex number 0+0i).
        2. Overloaded operator + to add two complex numbers.
        3. Overloaded operator * to multiply two complex numbers.
        4. Overloaded << and >> to print and read Complex Numbers.
*/
#include <iostream>
using namespace std;

class Complex{
	int real;
	int img;
public:
	Complex(){
		real=0;
		img=0;
	}
    friend istream& operator >> (istream &in, Complex &ob){
		cout<<"Enter the real part : ";
		in>>ob.real;
		cout<<"Enter the imaginary part : ";
		in>>ob.img;
		return in;
	}
	friend ostream& operator << (ostream &out, Complex &ob){
		if(ob.img >= 0)
            out<<ob.real<<"+"<<ob.img<<"i"<<endl;
        else{
            ob.img = -ob.img;
            out<<ob.real<<"-"<<ob.img<<"i"<<endl;
            ob.img = -ob.img;
        }
		return out;
	}
	Complex operator + (Complex ob){
	    Complex c1;
	    c1.real = this->real + ob.real;
        c1.img = this->img + ob.img;
        return c1;
	}
    Complex operator - (Complex ob){
	    Complex c1;
	    c1.real = this->real - ob.real;
        c1.img = this->img - ob.img;
        return c1;
	}
	Complex operator * (Complex ob){
	    Complex c1;
	    c1.real = (this->real * ob.real) - (this->img * ob.img);
        c1.img = (this->real * ob.img) + (this->img * ob.real);
        return c1;
	}
	Complex operator / (Complex ob){
	    Complex c1, numerator;
	    numerator.real = (this->real * ob.real) - (this->img * (-ob.img));
	    numerator.img = (this->real * (-ob.img)) + (this->img * ob.real);
	    int denominator = (ob.real * ob.real) + (ob.img * ob.img);
	    c1.real = numerator.real/denominator;
        c1.img = numerator.img/denominator;
        return c1;
	}
};
int main(){
	Complex ob1, ob2, result;
	cout<<"Enter details of first complex number :"<<endl;
	cin>>ob1; // Accepting an object
	cout<<"First complex number is : ";
	cout<<ob1; // Printing an object
	cout<<"\nEnter details of second complex number :"<<endl;
	cin>>ob2;
	cout<<"Second complex number is : ";
	cout<<ob2;

	//Addition Block
	cout<<"\nAddition of the two complex numbers is : ";
	result = (ob1+ob2); // Storing addition of objects in another object
	cout<<result;

	//Subtraction Block
	cout<<"\nSubtraction of the two complex numbers is : ";
	result = (ob1-ob2); // Storing subtraction of objects in another object
	cout<<result;

	//Multiplication Block
	cout<<"\nMultiplication of the two complex numbers is : ";
	result = (ob1*ob2); // Storing multiplication of objects in another object
	cout<<result;

	//Division Block
	cout<<"\nDivision of the two complex numbers is : ";
	result = (ob1/ob2); // Storing division of objects in another object
	cout<<result;
	return 0;
}
