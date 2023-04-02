#include<iostream>
#include<string>
using namespace std;
void reverse(string n){
	if(n.length()==0){
		return;
	}
	string a= n.substr(1);
	reverse(a);
	cout<<n[0];
}
int main(){
	string s;
	cin>>s;
	reverse(s);
}
