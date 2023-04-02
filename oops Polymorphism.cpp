#include<iostream>
using namespace std;
class name{
	public:
		void student(string n){
			cout<<n<<" String"<<endl;
		}
		void student(int n){
			cout<<n<<" Int"<<endl;
		}
};
int main(){
	name b;
	b.student("Somnath");
//	b.student("Rahul");
	b.student(35434343);
	
}
