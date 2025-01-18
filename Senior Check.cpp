#include <iostream>
using namespace std;
int main (){
	int age;
	cout<<"Enter your age:"<<endl;
	cin>>age;
	
	if(age>=65){
		cout<<"Your are eligible for senior person discount."<<endl;
	}
	else {
		cout<<"Your are not eligible for senior person discount."<<endl;
	}
	return 0 ;
}
