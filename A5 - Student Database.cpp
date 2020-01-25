/*
	Create student database with appropriate data members that should use the following features of object oriented programming
	in C++. Class, Object, array of objects, new, delete, default constructor to initialize student class fields,
	parameterized constructor to set the values into the objects, access specifiers, this pointer.
*/

#include<iostream>
using namespace std;

class Student{
private:
	int rollNo;
	string name;
public:
	Student(){
		name="";
		rollNo=0;
	}
	void accept(){
		cout<<"\nEnter the Name of Student : \n";
		cin>>name;
		cin.ignore(256, '\n');
		cout<<"Enter the Roll Number : \n";
		cin>>rollNo;
	}
	void display(){
		cout<<"\nName : \t"<<name<<endl;
		cout<<"Roll Number : \t"<<rollNo<<endl;
	}
	~Student(){}
};
class Exam{
private:
	int uniMarks[3];
	int intMarks[3];
	int subCode[3] = {10192, 10194, 10197};
	string subject[3] = {"EM-II", "BEE", "BME"};
public:
	void accept(){
		for(int i=0; i<3; i++){
			cout<<"Enter University Marks obtained in "<<subject[i]<<" : ";
			cin>>uniMarks[i];
			cout<<"Enter Internal Assessment Marks obtained in "<<subject[i]<<": ";
			cin>>intMarks[i];
		}
	}
	void display(){
		cout<<"\t    Subject Name\t    Subject Code\t"<<"    University Marks\t"<<"    Internal Assessment\t\n";
		for(int i=0; i<3; i++){
			cout<<"\t\t"<<subject[i]<<"\t\t\t"<<subCode[i]<<"\t\t\t"<<uniMarks[i]<<"\t\t\t\t"<<intMarks[i]<<"\n";
		}
	}
};

int main(){
	int i,n,j;
	cout<<"Enter the Number of Students : \n";
	cin>>n;
	Student s[n];
	Exam e[n];
	for(i=0;i<n;i++){
		s[i].accept();
		e[i].accept();
	}
	for(i=0;i<n;i++){
		s[i].display();
		e[i].display();
	}
	return 0;
}
