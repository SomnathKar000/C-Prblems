#include<iostream>
#include<math.h>
using namespace std;
	
int main(){
	float a,b,c;
	cin>>a>>b>>c;
	//  ans = {(-b +-(b^2 -4ac)^1/2} /2a
	int discriment = b*b - 4*a*c;
	if(discriment>0){
		cout<<"Roots are real and different"<<endl;
		float t1= (-b + sqrt(discriment))/(2*a);
		float t2= (-b - sqrt(discriment))/(2*a);
		cout<<"x = "<<t1<<endl;
		cout<<"y = "<<t2<<endl;
	}
	else if(discriment==0){
		cout<<"Roots are real and same "<<endl;
		float t=-b/(2*a);
		cout<<" x "<<t<<endl;
	}
	else{
		float realPart =-b/(2*a);
		float imagineryPart=sqrt(-discriment)/(2*a);
		cout<<"Roots are complex and different"<<endl;
		cout<<"x = "<<realPart <<" + "<<imagineryPart<<" i "<<endl;
		cout<<"y = "<<realPart <<" - "<<imagineryPart<<" i "<<endl;
	}
}
