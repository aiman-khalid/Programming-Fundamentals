#include <iostream>
using namespace std;
int main(){
	// declaring variabls
	int num1,num2;
	char oPerator;
	// taking input from user
	cout<<"Enter first number."<<endl;
	cin>>num1;
	cout<<"Enter second number."<<endl;
	cin>>num2;
	cout<<"Enter operator."<<endl;
	cin>>oPerator;
	
	// using switch case for operation
	switch(oPerator){
		case'+':
			cout<<num1<<" "<<oPerator<<" "<<num2<<" = "<<num1+num2<<endl;
		break;
		
		case'-':
			cout<<num1<<" "<<oPerator<<" "<<num2<<" = "<<num1-num2<<endl;
		break;
		
		case'*':
			cout<<num1<<" "<<oPerator<<" "<<num2<<" = "<<num1*num2<<endl;
		break;
		
		case'/':
			cout<<num1<<" "<<oPerator<<" "<<num2<<" = "<<num1/num2<<endl;
		break;
		
		default:
			cout<<"Invalid operation. Try again."<<endl;
		break;

			
	} return 0;
}
