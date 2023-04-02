#include<iostream>
using namespace std;
void checkLeapYear(int n){
	if(n%4==0){
		cout<<"Leap year";
	}
	else{
		cout<<"Not a leap year";
	}
}
int main(){
	int n;
	cout<<"Enter the year ";
	cin>>n;
	checkLeapYear(n);
}
