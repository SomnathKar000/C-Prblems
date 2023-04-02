#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int count,max;
	int i;
	max=0;
	count=0;
	for(i=0;i<n;i++){
		while(i<n){
			count =count+arr[i];
			i=i+2;
		}
		if(count>max){
			max=count;
		}
	}
	cout<<max;
}
