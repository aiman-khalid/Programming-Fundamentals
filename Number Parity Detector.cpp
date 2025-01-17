#include <iostream>
using namespace std;
int main (){
	int no;
	cout<<"Enter number to check whether it is positive or negative."<<endl;
	cin>>no;
	
	if(no%2==0){
		cout<<"The number is even."<<endl;
	}
	if(no%2!=0){
		cout<<"The number is odd."<<endl;
	}
	 return 0 ;
}
