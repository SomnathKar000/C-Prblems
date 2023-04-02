#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	// max till  i index
	
	int mx=arr[0];
	for(int i=0;i<n;i++){
		mx =max(mx,arr[i]);
//		if(max<arr[i]){
//			int temp = arr[i];
//			arr[i]=max;
//			max=temp;
//		}
		cout<<mx<<" ";
	}
	
}
