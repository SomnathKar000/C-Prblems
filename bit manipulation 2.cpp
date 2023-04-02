#include<iostream>
using namespace std;
bool check(int n){
	return n && !(n & (n-1));
}
int main(){
	int i;
	cin>>i;
	if(check(i)){
		cout<<"Yes";
	}
	else{
		cout<<"NO";
	}
}
