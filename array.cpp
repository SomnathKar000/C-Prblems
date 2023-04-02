#include<iostream>
#include<climits>
using namespace std;
int main(){
	int a;
	cin>>a;
	int array[a];
	for(int i=0;i<a;i++){
		cin>>array[i];
	}
	int maxNo = INT_MIN;
	int minNo = INT_MAX;
	for(int i=0;i<a;i++){
//		maxNo= max(maxNo,array[i]);
//		minNo = min(minNo,array[i]);
		if(maxNo<array[i]){
			maxNo = array[i];
		}

	     if(minNo>array[i]){
			minNo = array[i];
		}

	}
	cout<<" max value :- "<<maxNo<<" min value :- "<<minNo;
} 
