/*
    Write C++ program using STL for sorting and searching with user defined records such as
    person record (Name, birth, date, telephone no), item record (item code, item name, quantity and cost).
*/

#include<bits/stdc++.h>
using namespace std;
class Person{
public:
	string name;
	long long int telno;
	string dob;
	Person(){
		name=" ";
		telno=0;
		dob=" ";
	}
	void scan();
	void show();
};
void Person::scan()
{
	cout<<"Enter name :";
	cin>>name;
	cout<<"Enter Date of birth(dd/mm/yyyy):";
	cin>>dob;
	cout<<"Enter telephone number ";
	cin>>telno;
}
void Person::show()
{
	cout<<"Name: "<<name<<endl;
	cout<<"DOB: "<<dob<<endl;
	cout<<"Telephone: "<<telno<<endl;
}
bool compare(const Person& p1,const Person& p2)
{
	return p1.name<p2.name;
}
int main()
{
	int n;
	Person p[10];
	cout<<"Enter number of person";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		p[i].scan();
	}
	sort(p,p+n,compare);
	for(int i=0;i<n;i++)
	{
		p[i].show();
	}
	string na;
	string a[100];
	for(int i=0;i<n;i++)
	{
		a[i]=p[i].name;
	}
	cout<<"Enter name to search ";
	cin>>na;
	if(binary_search(a,a+n,na))
		cout<<"Found";
	else
		cout<<"Not found";
}
