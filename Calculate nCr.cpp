#include<iostream>
using namespace std;
int factorial(int a){
	int re=1;
	for(int i=1;i<=a;i++){
		re=re*i;
	}
	return re;
}
int Calculate(int n,int r){
	int ans = factorial(n)/(factorial(n-r)*factorial(r));
	return ans;
}
int main(){
	// Calculate nCr
	int n,r;
	cin>>n>>r;
	cout<<Calculate(n,r);
//int ans = factorial(n)/(factorial(r) * factorial(n-r));
//cout<<ans;

}
