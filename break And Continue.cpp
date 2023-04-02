#include<iostream>
using namespace std;
int main(){
    int money = 5000;
    for (int i=0;i<=31;i++){
        if (i%2==0)
        {
          continue;
        }
        if(money==0){
            break;
        }
      cout<<"You can go out today"<<endl;
        
    }
}