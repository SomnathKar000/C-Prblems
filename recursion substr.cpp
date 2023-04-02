#include<iostream>
#include<string>
using namespace std;
void substrs(string s, string ans){
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}
	char a=s[0];
	string rest = s.substr(1);
	substrs(rest,ans);
	substrs(rest,(a+ans));
}
int main(){
	string s;
	cin>>s;
	substrs(s,"");
	
}
