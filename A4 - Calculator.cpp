/*
	Write a C++ program to create a calculator for an arithmetic operator (+, -, *, /).
	The program should take two operands from user and performs the	operation on those two operands depending upon
	the operator entered by user. Use a switch statement to select the operation. Finally, display the result.
	Some sample interaction with the program might look like this:
	Enter first number, operator, second number: 10 / 3
	Answer = 3.333333
	Do another (y/n)? y
	Enter first number, operator, second number: 12 + 100
	Answer = 112
	Do another (y/n)? n
*/

#include <iostream>
using namespace std;
class Calculator{
public:
	int add(int a, int b){
		return a+b;
	}
	int sub(int a, int b){
		return a-b;
	}
	int mul(int a, int b){
		return a*b;
	}
	double div(int a, int b){
		return (double)a/b;
	}
};
int main(){
	Calculator ob;
	int num1, num2;
	char op;
	char ip = 'y';
	while(ip!='n'){
		cout<<"Enter first number, operator, second number : ";
		cin>>num1>>op>>num2;
		switch(op){
			case '+':
				cout<<"Answer : "<<ob.add(num1, num2)<<endl;
				break;
			case '-':
				cout<<"Answer : "<<ob.sub(num1, num2)<<endl;
				break;
			case '*':
				cout<<"Answer : "<<ob.mul(num1, num2)<<endl;
				break;
			case '/':
				cout<<"Answer : "<<ob.div(num1, num2)<<endl;
				break;
			default :
				cout<<"Please enter proper operator next time!!"<<endl;
		}
		cout<<"Do another (y/n)? ";
		cin>>ip;
		if(ip == 'n')
			cout<<"Goodbye!!"<<endl;
	}
    return 0;
}
