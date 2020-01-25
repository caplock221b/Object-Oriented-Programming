/*
    Create employee bio-data using following classes
        i)Personal record
		ii)Professional record
		iii)Academic record
		Assume appropriate data members and member function to accept required
		data & print bio-data. Create bio-data using multiple inheritances using C++.
*/

#include <iostream>
using namespace std;

class Personal{
protected:
	string name,dob,address,bloodGrp;
public:
	void setPersonal(){
		cout<<"Enter Name: ";
		getline(cin,name);
		cout<<"Enter Date of Birth: ";
		getline(cin,dob);
		cout<<"Enter Address: ";
		getline(cin,address);
		cout<<"Enter Blood Group: ";
		getline(cin,bloodGrp);
	}
};
class Professional{
protected:
	string qualification,post;
	int salary;
public:
	void setProfessional(){
		cout<<"Enter Qualification: ";
		getline(cin,qualification);
		cout<<"Enter Working Post: ";
		getline(cin,post);
		cout<<"Enter Salary: ";
		cin>>salary;
	}
};
class Academic{
protected:
	string college,certifications;
public:
	void setAcademic(){
		cout<<"Enter College Name: ";
		getline(cin,college);
		cout<<"Enter Certifications(if no then mention NA): ";
		getline(cin,certifications);
	}
};
class show:public Personal,public Professional,public Academic{
public:
	void display(){
		cout<<"___Personal Details___\n";
		cout<<"Name: "<<name<<endl;
		cout<<"Date of Birth: "<<dob<<endl;
		cout<<"Address: "<<address<<endl;
		cout<<"Blood Group: "<<bloodGrp<<endl;
		cout<<"___Professional Details__\n";
		cout<<"Qualification: "<<qualification<<endl;
		cout<<"Post: "<<post<<endl;
		cout<<"Salary: "<<salary<<endl;
		cout<<"___Academic Details___\n";
		cout<<"College: "<<college<<endl;
		cout<<"Certifications: "<<certifications<<endl;
	}
};
int main() {
	show obj;
	obj.setPersonal();
	obj.setProfessional();
	obj.setAcademic();
	obj.display();
	return 0;
}
