#include<iostream>
#include<string>
using namespace std;
void pir(string a){

	if(a.length()==0){
		return;
	}
	
	if(a[0]=='p' && a[1]=='i'){
		cout<<"3.14";
		pir(a.substr(2));
	}
	else{
		cout<<a[0];
		pir(a.substr(1));
	}
	
	
}
int main(){
	string s;
	cin>>s;
	
	pir(s);
}
