#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(s[i]==' '){
			s.erase(i,1)
		}
	}
	cout<<s;
}
