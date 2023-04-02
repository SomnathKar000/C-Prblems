#include<iostream>
using namespace std;
int countf(int arr[], int n, int val){
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]== val){
			count++;
		}
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int fre[2][n];
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			if(i==0){
				fre[i][j]=arr[j];
			}
			else{
				fre[i][j]=countf(arr,n,arr[j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<fre[1][i]<<" ";
	}
}
