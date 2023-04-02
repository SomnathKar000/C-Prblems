#include<iostream>
using namespace std;
int findKey(int arr[], int key){
	for(int i=0;i<6;i++){
	    if(key==arr[i]){
	    	return i;
	    }
	}
	return -1;
}
int main(){
	int arr[6]={12,25,65,89,78,45};
	int key;
	cin>>key;
	cout<<findKey(arr,key);

}
