#include<iostream>
using namespace std;
int addNaturalNum(int a){
	int b=0;
	for(int i=1;i<=a;i++){
		b=b+i;
	}
	return b;
}
int main(){
	int n;
	cin>>n;
	cout<<addNaturalNum(n);
}
