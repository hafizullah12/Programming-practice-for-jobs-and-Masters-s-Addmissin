// Series 1 + (1+2) + (1+2+3) + ...... + (1+2+....+n)
//AP of Multiple Ministry

#include<stdio.h>
int main()
{
    int n,sum=0,i,j;
    printf("Please Enter an Integer,n=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum = sum + j;
        }
    }
    printf("Sum = %d",sum);
    return 0; 
    
}
