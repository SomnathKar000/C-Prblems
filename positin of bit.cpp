#include<iostream>
using namespace std;
int getBit(int n,int pos){
	return (n & (1<<pos))!=0;
}
int setBit(int n,int pos){
	return (n | (1<<pos));
}
int clerBit(int n,int pos){
	return (n & ~(1<<pos));
}
int updateBit(int n,int pos, int val){
	n = n & ~(1<<pos);
	return n | (val<<pos);
}
int main(){
	int n,pos,val;
	cin>>n>>pos>>val;
//	cout<<getBit(n,pos)<<endl;
//	cout<<setBit(n,pos)<<endl;
//	cout<<clerBit(n,pos)<<endl;
	cout<<updateBit(n,pos,val)<<endl;
}

