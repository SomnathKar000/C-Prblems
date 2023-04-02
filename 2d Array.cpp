#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int arr[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	int  value;
	cin>>value;
	bool flag = false;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(arr[i][j]==value){
				flag= true;
			}
		}
	}
	if(flag){
		cout<<"Find value ";
	}
	else{
		cout<<"Not found";
	}
}
