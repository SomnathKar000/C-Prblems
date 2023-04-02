#include<iostream>
#include<math.h>
#include<string>
using namespace std;
void checkNumber(int n){
	int arm=100;
//	cout<<n%10;
	string stri = to_string(arm);
	cout<<stri;
}
int main(){
	int n;
	cout<<"Enter the armstrong number ";
	cin>>n;
	checkNumber(n);
}