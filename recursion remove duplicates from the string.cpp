#include<iostream>
#include<string>
using namespace std;

string redupli(string s){
	if(s.length()==0){
		return "";
	}
	char c=s[0];
	string ans= redupli(s.substr(1));
	if(c==ans[0]){
		return ans;
	}
	else{
		return(c+ans);
	}
}
int main(){
	
	cout<<redupli("aaaddffgghhh");
}
