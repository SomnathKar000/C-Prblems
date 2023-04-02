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
	int fq,count;
	
	for(int i=0;i<n;i++){
		count=1;
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j] && i!=j){
				fq=arr[i];
				count++;
			}
		}
		cout<<arr[i]<<"    "<<count<<endl;
	}
	
}
