#include<iostream>
using namespace std;
bool findValue(int m[4][4] ,int value){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(m[i][j]==value){
				return true;
			}
			else if(m[i][j]>value){
				j--;
			}
			else{
				i++;
			}
		}
	}
	return false;
}
int main(){
	int m[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int value;
	cin>>value;
	if(findValue(m,value)){
		cout<<"Found the value";
	}
	else{
		cout<<"Not found";
	}
}
