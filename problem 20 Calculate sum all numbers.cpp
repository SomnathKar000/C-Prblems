#include<iostream>
#include<string>
using namespace std;
class Sum{
	public:
		int sum=0;
		int sumNum(string a){
			int n=a.length();
			int j=0;
			for(int i=0;i<n;i++){
				
				string temp;
				if(isdigit(a[i])){
					temp[j]=a[i];
					j++;
				}
				else{
					sum= sum+stoi(temp);
					temp= "";
					j=0;
				}
			}
			return sum;
		}
};
int main(){
	string s;
	cin>>s;
	Sum a;
	cout<<a.sumNum(s);
}
