#include<iostream>
using namespace std;
bool shortarr(int arr[],int n){
	if(n==1){
		return 1;
	}
	bool rest =shortarr(arr+1 , n-1);
	return(arr[0]<arr[1] && rest);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(shortarr(arr, n)){
		cout<<"shorted";
	}
	else{
		cout<<"Not shorted";
		
	}
}
