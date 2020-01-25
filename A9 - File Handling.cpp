/*
    Write a C++ program that creates an output file, writes information to it, closes the file and
    open it again as an input file and read the information from the file.
*/

#include <iostream>
#include <fstream>
using namespace std;

class FileHandler{
	string line;
public:
	void fileCreation(){
		ofstream outFile;
		outFile.open("Sample", ios::app);
		cout<<"Enter the sentences that you want to store in your file (Enter \"stop\" when you want to stop writing to the file):"<<endl;
		getline(cin, line);
		while(line.compare("stop")!=0){
			outFile<<line<<endl;
			getline(cin, line);
		}
		outFile.close();
	}
	void fileReading(){
		ifstream inFile;
		inFile.open("Sample", ios::in);
		cout<<"Contents of the file are : "<<endl;
		try{
			if(!inFile){
				throw -1;
			}
			else{
				while(!inFile.eof()){
					getline(inFile, line);
					cout<<line<<endl;
				}
			}
		}
		catch(int a){
			cout<<"File does not exist!";
		}
		inFile.close();
	}
};

int main(){
	FileHandler ob;
	ob.fileCreation();
	ob.fileReading();
	return 0;
}
