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
	int mx=INT_MIN;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum= arr[j]+sum;
			if(sum>mx){
				mx=sum;
			}
		}
	}
	
	cout<<"Max value of subArray "<<mx;
}
