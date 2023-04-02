#include<iostream>
using namespace std;
class frequency {
	public:
		string s;
		bool occurance(char a,int n){
			for(int i=0;i<n;i++){
				if(s[i]==a){
				return false;
				}
			}
			return true;
		}
		void check(){
			cout<<"Enter the word"<<endl;
			cin>>s;
			int count=0;
			for(int i=0 ; i<s.length();i++){
				count=0;
				for(int j=i;j<s.length();j++){
					if(s[i]==s[j]){
						count++;
					}
				}
				if(occurance(s[i],i)){
					cout<<s[i]<<count<<" ";
				}
				
			}
		}
};

int main(){
	frequency a;
	a.check();
}
