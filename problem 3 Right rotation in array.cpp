#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int d,temp;
	cin>>d;
	while(d>0){
		temp=arr[n-1];
		for(int j=n-1;j>=0;j--){
			arr[j+1]=arr[j];
		}
		arr[0]=temp;
		d--;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
