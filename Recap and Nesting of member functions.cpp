#include<iostream>
#include<string>
using namespace std;
class info {
	string a;
	public:
		void read();
		void check_in();
		void ones();
};
void info :: read(){
	cout<<"Enter a binary number"<<endl;
	cin>>a;
}
void info :: check_in(){
	for(int i=0;i<a.length();i++){
		if(!(a.at(i)== '0') && !(a.at(i)=='1')){
			cout<<"Not a binary number"<<endl;
			return;
		}
	
	}
}
void info :: ones(){
	for(int i=0;i<a.length();i++){
		if(a[i]=='1'){
			a[i] ='0';
		}
		else{
			a[i]='1';
		}
	}
	cout<<a<<endl;
}

int main(){
	
	info i;
	i.read();
	i.check_in();
	i.ones();
}
