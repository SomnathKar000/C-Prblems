#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the length of the array ";
	cin>>n;
	int arr[n];
	int left=0;
	int right=0;
	int ans=0;
	for(int i=0;i<n;i++){
		cout<<"Enter "<<i<<" element ";
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		right =0;
		if(i!=0){
			left+=arr[i-1];
		}
		if(!(i+1==n)){
			for(int j=i+1;j<n;j++){
			right+=arr[j];
		    }
		    if(left==right){
			ans=i;
		}
		
		}
		
		
	}
	if(!ans==0){
		cout<<"The position is "<<ans<<" and the value is "<<arr[ans];
	}
	else{
		cout<<"Not found"<<endl;
	}
	
}
