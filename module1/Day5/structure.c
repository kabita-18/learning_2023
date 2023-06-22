#include<stdio.h>
#include <string.h>

struct pereson{
    char eName[20];
    int eNo;
    int salary;
} p1, p2;

int main(){
    
    strcpy(p1.eName, "kabita");
    strcpy(p2.eName, "Ayush");

    p1.eNo = 2030467;
    p2.eNo = 1712474;

    p1.salary = 15000000;
    p2.salary = 25000000;

    printf("Employee Name: %s\n", p1.eName );
    printf("Employee Number: %d\n", p1.eNo);
    printf("Employee Salary: %d\n", p1.salary);

    printf("Employee Name: %s\n", p2.eName );
    printf("Employee Name: %d\n", p2.eNo);
    printf("Employee Name: %d\n", p2.salary);

    return 0;

}