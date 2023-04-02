#include<iostream>
using namespace std;

int main(){
    int money;
    cin>>money;
    if (money>10000)
    {
      cout<<"road trip with ....";

    }
    else if (money>5000)
    {
        cout<<"shoping with ....";
    }
    else if (money>2000)
    {
        cout<<"shoping ";
    }
    else{
        cout<<"Friends";
    }
}