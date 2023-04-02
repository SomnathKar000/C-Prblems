#include<iostream>
using namespace std;
int countn(int n){
	int c =0;
	while(n!=0){
		n=n & (n-1);
		c++;
	}
	return c;
}
int main(){
	int n;
	cin>>n;
	cout<<countn(n);
}
