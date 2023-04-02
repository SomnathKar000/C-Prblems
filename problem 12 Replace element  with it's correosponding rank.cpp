#include<iostream>
#include<math.h>
using namespace std;
int findR(int arr[],int n,int val){
	int rank=1;
	for(int i=0;i<n;i++){
		if(val>arr[i]){
			rank++;
		}
	}
	return rank;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Rank of elements"<<endl;
	for(int i=0;i<n;i++){
		cout<<findR(arr,n,arr[i])<<" ";
	}
}
