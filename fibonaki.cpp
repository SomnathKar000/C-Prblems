#include<iostream>
using namespace std;
void fibonaki(int n){
	int a=0;
	int b=1;
	int next;
	for(int i=1;i<=n;i++){
		cout<<a<<endl;
		next =a+b;
		a=b;
		b=next;
	}
}
int main(){
	int n;
	cin>>n;
	fibonaki(n);
	
}
