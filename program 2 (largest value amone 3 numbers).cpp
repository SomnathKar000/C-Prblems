#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b){
		if(a>c){
			cout<<a<<" is the largest value";
		}
		else{
			cout<<c<<" is the largest value";
		}
	}
	else{
		if(b>c){
			cout<<b<<" is the largest value";
		}
		else{
			cout<<c<<" is the largest value";
		}
	}
}
