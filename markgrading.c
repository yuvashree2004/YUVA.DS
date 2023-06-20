#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,m6,m7,sum,avg;
    printf("Enter mark 1 = ");
    scanf("%d",&m1);
    printf("Enter mark 2 = ");
    scanf("%d",&m2);
    printf("Enter mark 3 = ");
    scanf("%d",&m3);
    printf("Enter mark 4 = ");
    scanf("%d",&m4);
    printf("Enter mark 5 = ");
    scanf("%d",&m5);
    printf("Enter mark 6 = ");
    scanf("%d",&m6);
    printf("Enter mark 7 = ");
    scanf("%d",&m7);
    sum=m1+m2+m3+m4+m5+m6+m7;
    avg=sum/7;
    printf("Total mark = %d\n",sum);
    printf("Average = %d\n",avg);
    if(avg<31)
    {
        printf("Fail");
    }
    else if(avg>=32 && avg<44)
    {
        printf("Third Division");
    }
    else if(avg>=45 && avg<59)
    {
        printf("Second Division");
    }
    else if(avg>=60 && avg<79)
    {
        printf("First Division");
    }
    else if(avg>=80 && avg<=100)
    {
        printf("Distinction");
    }
    else
    {
        printf("Wrong entry");
    }
}