#include<iostream>
using namespace std;
class complex{
	int a,b;
	public:
		void setData(int x, int y){
			cout<<"Enter number a "<<endl;
			a=x;
			cout<<"Enter number b "<<endl;
			b=y;
		}
		void setDataObject(complex o1, complex o2){
			a=o1.a +o2.a;
			b=o2.b + o1.b;
		}
		void getData(){
			cout<<"Your complex numbers are "<<a<<" "<<b<<endl;
		}
};

int main(){
	complex a1, a2,a3;
	a1.setData(1,9);
	a1.getData();
	a2.setData(9,1);
	a2.getData();
	a3.setDataObject(a1,a2);
	a3.getData();

}
