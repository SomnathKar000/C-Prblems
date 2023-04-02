#include<iostream>
using namespace std;
bool check(int n){
	if(n==0){
		return 0;
	}
	while(n!=1){
		if(n%2==1){
			return 0;
		}
		n=n/2;
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	
	if(check(n)){
		cout<<"yes\n";
	}
	else{
		cout<<"No\n";
	}
}
