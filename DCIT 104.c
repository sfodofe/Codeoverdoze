#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, i, j;
    int flag = 0;
    int sum00;
    printf("Enter the numbers:");
    scanf("%d %d",&num1,&num2);
    for(i=num1+1; i<=num2; i++)
    {
        flag=0;
        for(j=2; j<i/2; j++)
        {
            flag=1;
            break;
        }
    }
            if(flag==0)
        {
               int sum=i+1;
            printf("Prime numbers:%d/n",i);
            printf("Average:%dd/n",sum);
        }
    return 0;
}
