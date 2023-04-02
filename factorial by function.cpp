#include<iostream>
using namespace std;
void findFactorial(int n){
	int num=1;
	for(int i=1;i<=n;i++){
		num= num*i;
	}
cout<<num;
}
int main(){
	int j;
	cin>>j;
	findFactorial(j);
}
