#include<iostream>
#include<string.h>
using namespace std;
 void reverse(string s){
 	if(s.length()==0){
 		return;
	 }
	string o=s.substr(1);
	reverse(o);
	cout<<s[0];
 }
int main(){
	string s;
	cin>>s;
	int n= s.size();
	for(int j=0,i=n-1;i>j;i--,j++){
		swap(s[j],s[i]);
	}
//	reverse(s);
	cout<<s;
}
