#include <iostream>
using namespace std;
int main() {
   int day;
   cout<<"Press 1-7 to print the corresponding day of the week\n";
   cin>>day;
   
   switch (day) {
       case 1:
      cout<<"MONDAY";
      break;
      
      case 2:
      cout<<"TUESDAY";
      break;
      
      case 3:
      cout<<"WEDNESDAY";
      break;
      
      case 4:
      cout<<"THURSDAY";
      break;
      
      case 5:
      cout<<"FRIDAY";
      break;
      
      case 6:
      cout<<"SATURDAY";
      break;
      
      case 7:
      cout<<"SUNDAY";
      break;
      
      default:
      cout<<"INVALID INPUT";
   }
    return 0;
}
