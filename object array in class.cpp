#include<iostream>
using namespace std;

class Employee{
	int id;
	int salary;
	public:
		void setId(){
			salary=1200;
			cout<<"Enter your id "<<endl;
			cin>>id;
		}
		void getId(){
			cout<<"The id of employee is "<<id<<endl;
			cout<<"The salary of employee is "<<salary<<endl;
		}
};

int main(){
	Employee IBM[4];
	for(int i=0;i<4;i++){
		IBM[i].setId();
		IBM[i].getId();
	}
}
