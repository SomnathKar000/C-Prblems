#include<iostream>
using namespace std;
bool finda(int arr[], int n, int idx){
	for(int i=0;i<n;i++){
		if(arr[i]==arr[idx] && i<idx){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int temp[n];
	int c=0;
	
	for(int i=0;i<n;i++){
		if(arr[i]!=arr[i+1] && finda(arr,n,i)==true){
			temp[c]=arr[i];
				c++;
		}
		else{
			continue;
		}
	}
	for(int i=0;i<c;i++){
		cout<<temp[i]<<" ";
	}
}
