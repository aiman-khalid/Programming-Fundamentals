#include <iostream>
using namespace std;
int main() {
    double miles,km,m,cm,mm,um;
    // input taken from user
    cout<<"Enter the distance from SHU to your home in miles."<<endl;
    cin>>miles;
    
    // converting miles to km
    km=miles*1.609;
    // converting miles to m
    m=miles*1609.344;
    // converting miles to cm
    cm=miles*160934.4;
    // converting miles to mm
    mm=miles*1609344;
    // converting miles to um
    um=miles*1609344000;
    
    // printing computed values on screen
    cout<<km<<"km"<<endl<<m<<"m"<<endl<<cm<<"cm"<<endl<<mm<<"mm"<<endl<<um<<"um"<<endl;
    
    return 0;
}
