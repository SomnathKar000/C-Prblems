#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	bool s =1;
	for(int i=2;i<n;i++)
	if(n%i==0){
		cout<<"not prime"<<endl;
		s=0;
		break;
	}
	if(s==1){
		cout<<"prime";
	}
}
