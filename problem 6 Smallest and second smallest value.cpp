#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int s,ss;
	s=INT_MAX;
	
	for(int i=0;i<n;i++){
		if(s>arr[i]){
			s=arr[i];	
		}
	}
	ss=INT_MAX;
	for(int i=0;i<n;i++){
		if(ss>arr[i] && s!=arr[i]){
			ss=arr[i];
		}
	}
	cout<<"Smallest value is "<<s<<" second smallest value is "<<ss;
}
