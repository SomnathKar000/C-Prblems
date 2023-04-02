#include<iostream>
#include<string.h>
using namespace std;
string rev(string s){
	int n=s.length();
	for(int i=0;i<n/2;i++){
		char temp=s[i];
		s[i]=s[n-1-i];
		s[n-1-i]=temp;
		
	}
	return s;
}
int main(){
	string n;
	cin>>n;
	cout<<rev(n);
}

