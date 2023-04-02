#include<iostream>
#include<math.h>
using namespace std;
//int repeatNumber(int arr[], int n){
//	int Index;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			if(arr[i]==arr[j] && i!=j){
//				Index=min(i,j);
//			}
//		}
//	}
////	minIndex= max(same[0],same[1],same[2]);
//	return Index;
//}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	const int N =1e6+2;
	int idx[N];
	for(int i=0;i<N;i++){
		idx[i]=-1;
	}
	
	int minIndex =INT_MAX;
	for(int i=0;i<n;i++){
		if(idx[arr[i]] != -1){
			minIndex = min(minIndex,idx[arr[i]]);
		}
		else{
			idx[arr[i]] ==i;
		}
	}
	
	if(minIndex=INT_MIN){
		cout<<-1;
	}
	else{
		cout<<minIndex +1<<endl;
	}
}
