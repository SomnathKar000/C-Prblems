#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int v=0,c=0,di=0,spch=0;
	for(int i=0;i<s.length();i++){
		if((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z')){
			if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
				v++;
			else{
				c++;
			}
		}
		else if(s[i]>='0' && s[i]<='9'){
			di++;
		}
		else{
			spch++;
		}	
	}
	cout<<"Vowels : "<<v<<endl;
	cout<<"Consonents : "<<c<<endl;
	cout<<"Digits : "<<di<<endl;
	cout<<"Special Characters : "<<spch<<endl;
}
