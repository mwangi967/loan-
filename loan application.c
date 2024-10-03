#include <stdio.h>
int main()
{
int age;
int salary;

printf("enter the age");
scanf("%d",&age);

printf("enter the salary");
scanf("%d",&salary);

if(age>21 && salary> 21000)
{
printf("give loan");
}
else 
{
printf("deny loan");
}
return 0;
}