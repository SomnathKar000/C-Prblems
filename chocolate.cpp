#include<iostream>
using namespace std;
int chocolate(float rupe){
	float chocolate;
	chocolate = rupe ;
	while(rupe>0){
		float wrapper= rupe/3;
		chocolate = chocolate +wrapper;
		rupe= rupe/3;
	}
	return chocolate;
}
int main(){
	float rupees;
	cin>>rupees;
	cout<<chocolate(rupees)<<" Chocolates ";
}
