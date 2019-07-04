#include<stdio.h>

void getinput(int *a,int *b)
{
        printf("Enter two numbers:");
        scanf("%d%d",a,b);
}
int add(int a,int b)
{
        int sum;
        sum=a+b;
        return sum;
}
void getoutput(int sum)
{
        printf("sum:%d",sum);
}

int main()
{
        int a,b,sum;
        getinput(&a,&b);
        sum=add(a,b);
        getoutput(sum);
}
~
