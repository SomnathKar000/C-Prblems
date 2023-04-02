#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string str[5]={"case","continu","break","for","type"};
	string s;
	cin>>s;
	bool key=1;
	for(int i=0;i<5;i++){
		if(str[i]==s){
			cout<<s<<" is a key";
			key =0;
		}
		
	}
	if(key){
		cout<<s<<" not a key";
	}
	
}
