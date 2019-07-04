
#include<stdio.h>

void getinput(int *a,int *b)
{
  printf("Enter two numbers:");
  scanf("%d %d",a,b);
}

void add(int a,int b ,int *sum)
{
        *sum=a+b;
}

void getoutput(int sum)
 {
   printf("the sum of two numbers is %d",sum);
 }

int main()
{
  int a,b,sum;
  getinput(&a,&b);
  add(a,b,&sum);
  getoutput(sum);
}

