#include<iostream>
#include<string>
using namespace std;
int main(){
	string str ="hgdhhjfjhfjhdhdhgch";
	for(int i=0;i<str.size();i++){
		if(str[i]>='a' && str[i]<='z'){
			str[i]-=32;
		}
	}
	cout<<str;
}

