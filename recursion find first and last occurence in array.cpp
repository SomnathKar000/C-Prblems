#include<iostream>
using namespace std;
int finda(int arr[],int n,int i,int key){
	if(i==n){
		return -1;
	}
	if(arr[i]==key){
		return i;
	}
	return finda(arr,n,i+1,key);
}
int lasta(int arr[],int n,int i,int key){
	if(i==n){
		return -1;
	}
	int rest =lasta(arr,n,i+1,key);
	if(rest!=-1){
		return rest;
	}
	if(arr[i]==key){
		return i;
	}
	return -1;
}
int main(){
	int arr[6]={5,6,8,6,3,5};
	cout<<finda(arr,6,0,6)<<endl;
	cout<<lasta(arr,6,0,6);
}
