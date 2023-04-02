#include<iostream>
#include<string>
using namespace std;
string movex(string str){
	if(str.length()==0){
		return "";
	}
	char a=str[0];
	string ans=movex(str.substr(1));
	if('x'==a){
		return ans+a;
	}
	else{
		return a+ans;
	}
}
int main(){
	string s;
	cin>>s;
	
	cout<<movex(s);
}
