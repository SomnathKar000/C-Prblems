#include<iostream>
#include<string>
using namespace std;
class word{
	public:
		string s;
		void read();
		void reEdit();
};
void word :: read(){
	cout<<"Enter the word"<<endl;
	cin>>s;
}
void word :: reEdit(){
	s[0]=toupper(s[0]);
	s[s.length()-1]=toupper(s[s.length()-1]);
	cout<<s<<endl;
}
int main(){
	word a;
	a.read();
	a.reEdit();
}


