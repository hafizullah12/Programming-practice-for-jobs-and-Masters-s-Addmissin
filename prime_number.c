#include<stdio.h>
int main()
{
int in,i,isPrime=1;
printf("Enter the Prime");
scanf("%d",&in);
for(i=2;i<in;i++)
{
    if(in%i==0)
    {
        isPrime = 0;
        break;
    }
}

if(isPrime==1)
{
    printf("%d is prime",in);

}
else 
{
    printf("%d is not prime",in);
}
return 0;
}
