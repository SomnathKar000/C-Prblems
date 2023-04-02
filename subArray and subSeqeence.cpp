#include<iostream>
#include<math.h>
using namespace std;
int subArrayOfArray(int n){
	int subArray = n*(n+1)/2;
	return subArray;
}

int subSequenceOfArray(int n){
	int subSequence = pow(2,n);
	return subSequence;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	// sub arrays of an array
	
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum =arr[j]+ sum;
			cout<<sum<<" ";
		}
	}
}
