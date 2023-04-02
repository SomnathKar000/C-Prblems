#include<iostream>
using namespace std;
int factorial(int n){
	int b=1;
	for(int i=1;i<=n;i++){
		b=b*i;
	}
	return b;
}
int main(){
	int n;
	cin>>n;
	cout<<factorial(n);
}
