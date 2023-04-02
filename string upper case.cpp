#include<iostream>
#include<string>
using namespace std;
int main(){
	string s = "KJDFKJDKJFHDF";
	for(int i=0;i<s.length();i++){
		if(s[i]>='A' && s[i]<='Z'){
			s[i]+=32;
		}
	}
	cout<<s;
}

