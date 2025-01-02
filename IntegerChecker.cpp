#include <iostream>
using namespace std;
int main(){
	// integer checker
	int num1;
	cout<<"Enter any integer to check whether it is positive, negative or zero."<<endl;
	cin>>num1;
	
	bool isPositive=num1>0;
	bool isNegative=num1<0;
	
	if(isPositive){
		cout<<num1<<" is positive."<<endl;
	} else if(isNegative){
		cout<<num1<<" is negative."<<endl;
	}else{
		cout<<num1<<" is zero."<<endl;
	} return 0 ;
}
