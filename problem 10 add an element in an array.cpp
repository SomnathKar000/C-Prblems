#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter element to add"<<endl;
	int add;
	cin>>add;
	n++;
	int temp[n];
	for(int i=0;i<n;i++){
		if(i<n-1){
			temp[i]=arr[i];
		}
		else{
			temp[i]=add;
		}
	}
	for(int i=0;i<n;i++){
		cout<<temp[i]<<" ";
	}
}
