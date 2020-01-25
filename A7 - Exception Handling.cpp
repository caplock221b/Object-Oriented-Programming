/*
	Create User defined exception to check the following conditions and throw the exception if the criterion does not meet.
		a.User has age between 18 and 55
		b.User has income between Rs. 50,000 – Rs. 1,00,000 per month
		c.User stays in Pune / Mumbai / Bangalore / Chennai
		d.User has 4-wheeler
	Accept age, Income, City, Vehicle from the user and check for the conditions mentioned above.
	If any of the condition not met then throw the exception.
*/
#include <iostream>
using namespace std;

class User{
	int age;
	float salary;
	string city;
	int car_wheels;
public:
	User(){
		age=0;
		salary=0;
		city="";
		car_wheels=0;
	}
	void setUser(int age, float salary, string city, int car_wheels){
		this->age = age;
		this->salary = salary;
		this->city = city;
		this->car_wheels = car_wheels;
	}
	void letsHandleExceptions(){
		try{
			if(age<18 || age>55){
		 		throw age;
		 	}
		 	else{
				cout<<"Your are "<<age<<" years old."<<endl;
			}
		}catch(int){
			cout<<"Invalid Age!!"<<endl;
		}
		try{
			if(salary<50000 || salary>100000){
		 		throw salary;
		 	}
		 	else{
				cout<<"Your salary is Rs. "<<salary<<"."<<endl;
		 	}
		}catch(float){
			cout<<"Invalid Salary!!"<<endl;
		}
		try{
			if(city=="Pune" || city=="Mumbai" || city=="Bangalore" || city=="Chennai"){
				cout<<"You live in "<<city<<"."<<endl;
			}
			else{
				throw city;
			}
		}
		catch(string){
			cout<<"Invalid City!!"<<endl;
		}
		try{if(car_wheels!=4){
				throw &car_wheels;
			}
			else{
				cout<<"Your car has 4 wheels."<<endl;
			}
		}
		catch(int *){
			cout<<"Invalid number of Car Wheels!!"<<endl;
		}
	}
};

int main(){
	int a;
	float f;
	string s;
	int c;
	cout<<"Enter your age : ";
	cin>>a;
	cout<<"Enter your salary : Rs. ";
	cin>>f;
	cout<<"Enter the name of your city : ";
	cin>>s;
	cout<<"Enter number of wheels in your car : ";
	cin>>c;
	cout<<"\n";
	User obj;
	obj.setUser(a, f, s, c);
	obj.letsHandleExceptions();
	return 0;
}
