#include<iostream>
using namespace std;
class employee{
	int id;
	static int count;
	public:
		void setid(){
			cout<<"Enter your id "<<endl;
			cin>>id;
			count++;
		}
		void getData(){
			cout<<"Employee id "<<id<<" and this is empolyee number "<<count<<endl;
		}
};

int employee :: count;

int main(){
	employee som, hullo, rupam;
	som.setid();
	hullo.setid();
	rupam.setid();
	som.getData();
	rupam.getData();
	hullo.getData();
}
