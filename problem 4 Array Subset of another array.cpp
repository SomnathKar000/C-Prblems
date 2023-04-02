#include<iostream>
#include<math.h>
using namespace std;
//bool find(int arr[],int n,int i,int key){
//	if(n==i){
//		return 1;
//	}
//	if(arr[i]==key){
//		return true;
//	}
//	else{
//		find(arr,n,i+1,key);
//	}
//	
//}
//void check(int arr1[], int n,int arr2[],int m){
//	if(m==0){
//		return;
//	}
//	if(find(arr1,n,0,arr2[m-1])){
//		find(arr1,n,0,arr2[m-1]);
//	}
//	else{
//		cout<<"NOO";
//		return;
//	}
//	cout<<"Yes";
//}
int main(){
	int n;
	cin>>n;
	int arr1[n];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	int m;
	cin>>m;
	int arr2[m];
	for(int i=0;i<m;i++){
		cin>>arr2[i];
	}
	bool flag=0;
	
	for(int i=0;i<m;i++){
		flag=0;
		for(int j=0;j<n;j++){
			if(arr2[i]==arr1[j]){
				flag=1;
				break;
			}
			if(flag==0 && j==n-1){
				flag=0;
				break;
			}
		}
		if(flag==0){
			break;
		}
	}
	if(flag==1){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	
}
