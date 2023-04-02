#include<iostream>
using namespace std;
void swap(int *a, int *b){
	int temp =*a;
	*a =*b;
	*b=temp;
}
int main(){
//	int arr[5]={1,21,56,89,45};
//	int *ptr= arr;
//	cout<<*arr<<endl;
//	ptr++;
//	cout<<*ptr<<endl;
//	
//	for(int i=0;i<5;i++){
//		cout<<*(arr+i)<<endl;
//	}
	int a=10,b=20;
	swap(&a,&b);
	cout<<a<<"   "<<b;
}
