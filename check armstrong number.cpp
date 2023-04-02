#include<iostream>
#include<math.h>
#include<string>
using namespace std;
void checkNumber(int n){
	int a= pow(n,3);
//	cout<<n%10;
//	string stri = to_string(arm);
	cout<<a;
}
int main(){
	int n;
	cout<<"Enter the armstrong number ";
	cin>>n;
	checkNumber(n);
}
