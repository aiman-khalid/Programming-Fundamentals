#include <iostream>
using namespace std;
int main(){
	int arr[7] , i; // declaring array
	for(i=0;i<=6;i++){
	cout<<"Enter the "<<i+1<<" value : ";
	cin>>arr[i];
} 
	// loop to print all input values
	cout << "You entered: ";
    for (i = 0; i <= 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
 return 0;
}
