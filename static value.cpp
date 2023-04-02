#include<iostream>
using namespace std;
int numberSe(int a){
	static int b=0;
	b=b+1;
	return b*a;
}
int main(){
	int a;
	cin>>a;
	 for(int i=0;i<10;i++){
	 	cout<<" "<<numberSe(a);
	 }
}
