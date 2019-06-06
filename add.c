#include<stdio.h>

void getinput(int *a, int *b)
{
printf("Enter two numbers:");
scanf("%d %d ",a,b);

}
int add()
{
 int a , b ,sum;
sum=a+b;
}
int getoutput()
{
printf("%d+%d=%d",a,b,sum);

}
int main()
{
int a,b,c,sum;
 getinput(&a,&b);
 sum(&a,&b);
getoutput(&a,&b,&c,&sum);
}
