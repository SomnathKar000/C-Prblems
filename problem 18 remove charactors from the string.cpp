#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	string k;
	cin>>k;
	for(int i=0;i<k.length();i++){
		for(int j=0;j<s.length();j++){
			if(k[i]==s[j]){
				s.erase(j,1);
			}
		}
	}
	cout<<s;
	
}
