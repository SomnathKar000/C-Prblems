//#include<iostream>
//using namespace std;
//int main(){
//	
//}
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ams =0;
	int num = n;
	while(n>0){
		int dig = n%10;
		ams = ams + pow(dig,3);
		n=n/10;
	}
	if(ams==num){
		cout<<"It is a armstrong number";
	}
	else{
		cout<<"It is not a armstrong number";
	}
}
