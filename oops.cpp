#include<iostream>
using namespace std;
class Student{
	string name;
	public:
	int age;
	bool gender;
	Student(){
		cout<<"Default constructor"<<endl;
	}
	Student(string s, int a, bool g){
		cout<<"Parameterised constructor"<<endl;
		name=s;
		age=a;
		gender=g;
	}
	Student(Student &a){
		cout<<"Copy constructor"<<endl;
		name= a.name;
		age=a.age;
		gender=a.gender;
	}
	~Student(){
		cout<<"Destructor called"<<endl;
	}
	void setNmae(string s){
		name=s;
	}
	bool operator ==(Student &a){
		if(name==a.name && age==a.age && gender==a.gender){
			return true;
		}
		return false;
	}
	void getNmae(){
		cout<<name<<endl;
	}
	void printInfo(){
		cout<<"Name = "<<name<<endl;;
		cout<<"age = "<<age<<endl;
		cout<<"gender = "<<gender<<endl;;
	}
};
int main(){
	Student b("Tanmoy",21,1);
	Student a("Somnath",21,1);
	Student c=a;
	if(b==a){
		cout<<"Same"<<endl;
	}
	else{
		cout<<"Not same"<<endl;
	}
	
	
//	cout<<"Enter student numbers ";
//	int n;
//	cin>>n;
//	Student arr[n];
//	for(int i=0;i<n;i++){
//		string a;
//		cout<<"Enter name ";
//		cin>>a;
//		arr[i].setNmae(a);
//		cout<<"Enter age ";
//		cin>>arr[i].age;
//		cout<<"Enter gender ";
//		cin>>arr[i].gender;
//	}
//	for(int i=0;i<n;i++){
//		arr[i].printInfo();
//		
//	}
}
