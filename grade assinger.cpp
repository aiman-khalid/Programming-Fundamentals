#include <iostream>
using namespace std;
int main() {
    int marks;
    marks<100;
    // input taken from user
    printf("Enter the marks you got in programming fundamental (out of 100):");
    scanf("%d",&marks);
    
    // using nested if else to assign grades using operators
    if(marks<=100 && marks>=90){
        printf("Grade=A+");
    } else if(marks>=70 && marks<90){
        printf("Grade=B"); 
    } else if (marks>=50 && marks<70){
        printf("Grade=C");
    } else if(marks<50){
        printf("Grade=F");}
        else
			{
        	printf("Invalid");
			}
    return 0;
}
