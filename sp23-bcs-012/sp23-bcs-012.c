//sp23-bcs-012
//program to measure salaries of employees
#include <stdio.h>
#include <stdlib.h>

int main()
{int i,hours,rph,salary,sum=0;//i for counter,rph for rate per hour
float ave,no=10,maxh=0;//maxh for maximum hours worked
    for(i=1;i<=10;i++)
   {
    printf("enter no of hours worked:\n");
    scanf("%d",&hours);//hours worked
    printf("enter rate per hour(rph>=500 && rph<=5000):\n");
    if(rph<500 && rph>5000)
    printf("it is above the range");
    else
    scanf("%d",&rph);//rate per hour}
    salary=hours*rph;
    //To calculate the sum of salaries
    sum=sum+salary;
    //to find max hours
    if(hours>maxh)
        {maxh=hours;}

    }
    printf("total salary is %d\n",sum);
    //to calculate the average salary
    ave=sum/no;
    printf(" average salary is %f\n",ave);
    printf("maximum hours is %f\n",maxh);


    return 0;
}
