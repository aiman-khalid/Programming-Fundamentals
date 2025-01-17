#include <iostream>
using namespace std;

int main() {
    double celsius;
    while (true) {   
        cout << "Enter temperature in Celsius (or type -99 to exit): ";
        cin >> celsius;

        if (celsius == -99)
		{ 
		    cout << "Program Exited!!"<< endl;
		break; // Exit condition
		}
		// converting into fahrenheit
        double fahrenheit = (celsius * 9/5) + 32;
            cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    }
    return 0;
}
