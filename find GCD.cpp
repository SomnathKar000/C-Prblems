#include<iostream>
#include<math.h>
using namespace std;
int gcd(int a,int b){

	
	while(b!=0){
		int ans=a%b;
		a=b;
		b=ans;
		
	}
	return a;
}
int main(){
	int a,b;
	cin>>a>>b;
	if(a>=b){
		cout<<gcd(a,b);
	}
	else{
		cout<<gcd(b,a);
	}
}
