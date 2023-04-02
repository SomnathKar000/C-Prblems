#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char name[n+1];
	cin>>name;
	bool flag =false;
	cout<<name[5];
	for(int i=0;i<n;i++){
		if(name[i]!=name[n-1-i]){
			flag=true;
		}
	}
	if(flag){
		cout<<"Not palindrome";
	}
	else{
		cout<<"Palimdrome";
	}
}
