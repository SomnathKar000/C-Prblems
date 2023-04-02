#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
			s.erase(i,1);
		}
	}
	cout<<s;
}
