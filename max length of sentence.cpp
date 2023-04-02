#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();
	char sen[n+1];
	cin.getline(sen,n);
	cin.ignore();
	
	int i=0;
	int currlen =0, maxlen=0;
	int st, maxst;
	
	while(1){
		
		if(sen[i]==' ' || sen[i]=='\0'){
			if(currlen > maxlen){
				maxlen = currlen;
				maxst= st;
			}
			currlen =0;
			st=i+1;
		}
		else{
		currlen ++;	
		}
		if(sen[i]=='\0'){
			break;
		}
		i++;
	}
	
	cout<<maxlen<<endl;
	for(int j=0;j<maxlen ;j++){
		cout<<sen[j+maxst];
	}
}
