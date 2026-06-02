#include<stdio.h>
int main()
{
    int num , i ,count =0;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num==0)
    {
        count++;
    }
    while(num!=0)
    {
        count++;
        num=num/10;
    }
    printf("The number of digits in the given number is: %d",count);
    return 0;

    }

