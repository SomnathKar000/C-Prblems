#include<iostream>
using namespace std;
bool check(int a,int b,int c){
	int y,z;
	int x= max(a,max(c ,b));
	if(x==a){
		y=b;
		z=c;
	}
	else if(x==b){
		y=a;
		z=c;
	}
	else{
		y=a;
		z=b;
	}
	if(x*x==y*y + z*z){
		return true;
	}
	else {
		return false;
	}
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(check(a,b,c)){
		cout<<"Pythagorian sequence";
	}
	else{
		cout<<"not pythagorian sequence";
	}
	
}
