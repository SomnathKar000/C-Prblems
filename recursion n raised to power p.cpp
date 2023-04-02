#include<iostream>
using namespace std;
int ntop(int n,int p){
	if(p==0){
		return 1;
	}
	int ans = n * ntop(n,(p-1));
	return ans;
}
int main(){
	int n,p;
	cin>>n>>p;
	cout<<ntop(n,p);
}
