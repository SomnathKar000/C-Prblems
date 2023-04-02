#include<iostream>
using namespace std;
typedef struct emp{
	int id;
	string name;
	float salary ;
} ep;
typedef union payment{
	int online;
	int offline;
	int card;
} pay;
int main(){
	enum meal {breakfast,lunch,dinner
	};
	
	meal m1=breakfast;
	cout<<m1;
	
	
	
//	pay sm;
//	sm.online=2300;
//	cout<<sm.online<<endl;
//	ep happy;
//	happy.id=226300;
//	happy.name="Happpy";
//	happy.salary=120000;
//	cout<<happy.id<<endl;
//	cout<<happy.name<<endl;
//	cout<<happy.salary<<endl;
}
