#include<iostream>
using namespace std;
class student {
	private:
		int id;
	public:
		string name;
		int roll;
//		student(string a, int b){
//			name=a;
//			roll=b;	
//		}
		void set(int id){
			
		}
		void get(){
			cout<<id;
		}
};
void student :: set(int a){
	id=a;
}
int main(){
	student b;
//	b.student("Somnath",26300);
	b.set(23);
	b.get();
//	int alu= b.get();
//	cout<<alu;
	
}
