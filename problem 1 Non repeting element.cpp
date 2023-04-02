#include<iostream>
using namespace std;

int main(){
//	int n;
//	cin>>n;
//	int arr[n];
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
	
	int arr[6]={4,5,5,4,6,7};	
	
	
//	int ans=arr[0];
	for(int i=0;i<6;i++){
		bool flag=0;
		for(int j=0;j<6;j++){
			if(arr[i]==arr[j] && i!=j){
				flag=0;
				break;
			}
			flag=1;
		}
	if(flag==1){
		cout<<"No repeat element "<<arr[i]<<endl;
	    }
	}
		

//	int i=0;
//	while(i){
//		bool flag=1;
//	
//		for(int j=0;j<6;j++){
//			if(arr[i]==arr[j] && i!=j){
//				flag =0;
//				break;
//			}
//			flag =1;
//			
//			
//		}
//		if(flag){
//			cout<<"non repeat element"<<arr[i];
//		}
//		else{
//			cout<<"no repeat";
//		}
//		
//		if(i==6){
//			break;
//		}
//		i++;
//	}
}
