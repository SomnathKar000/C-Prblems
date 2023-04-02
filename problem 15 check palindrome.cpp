#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n=s.length();
	bool flag=1;
	for(int i=0;i<n;i++){
		if(s[i]==s[n-i-1]){
			
		}
		else{
			flag=0;
		}
	}
	if(flag){
		cout<<"Palindrome";
	}
	else{
		cout<<"Not Palindrome";
	}
}
