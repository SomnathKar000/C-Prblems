#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	// max length of arithemtic subarray
	
	int pd = arr[1]-arr[0];
	int corr =2;
	int ans =2;
	int j=2;
	while(n>j){
		if(pd==arr[j]-arr[j-1]){
			corr++;
		}
		else{
			pd=arr[j]-arr[j-1];
			corr=2;
		}
		ans=max(corr,ans);
		j++;
	}
	cout<<ans;
}
