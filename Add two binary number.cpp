#include<iostream>
using namespace std;
int reverse(int c){
	int ans=0;
	while(c>0){
		int i=c%10;
		ans = ans*10 +i;
		c/=10;
	}
	return ans;
}
int addBinary(int a,int b){
	int ans =0;
	int pre =0;
	while(a>0 && b>0){
		if((a%2==0 && b%2==1) || (a%2==1 && b%2==0)){
			if(pre ==1){
				ans= ans*10 + 0;
				pre =1;
			}
			else{
				ans = ans*10 + 1;
				pre = 0;
			}
		}
		else if(a%2==1 && a%2==1){
			ans= ans*10 +pre;
			pre=1;
			
		}
		else{
			if(pre==1){
				ans= ans*10 + pre;
				pre=0;
			}
			else{
				ans= ans*10 + pre;
				pre=0;
			}
		}
		a= a/10;
		b= b/10;
	}
	while(a>0){
		if(pre==1){
			if(a%2==1){
				ans= ans*10 +0;
				pre=1;
			}
			else{
				ans=ans*10 +1;
				pre =0;
			}
		}
		else{
			ans = ans*10 + (a%2);
		}
		a= a/10;
	}
	while(b>0){
		if(pre==1){
			if(b%2==1){
				ans= ans*10 +0;
				pre=1;
			}
			else{
				ans=ans*10 +1;
				pre =0;
			}
		}
		else{
			ans = ans*10 + (b%2);
		}
		b= b/10;
	}
	if(pre==1){
		ans =ans*10+ 1;
	}
	ans = reverse(ans);
	return ans;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<addBinary(a,b);
}
