#include<stdio.h>

void getinput(int *n,int *c)
{
        printf("Enter the size of the array:");
        scanf("%d",n);
        printf("Enter the  %d values:",*n);
        for(int i=0;i<*n;i++)
        {
                scanf("%d",c);
                c++;
        }

}
void add(int *c,int n,int *sum)
{
        for(int i=0;i<n;i++)
        {
                *sum=*sum+*c;
                c++;
        }

}

void output(int sum)
{
        printf("sum of numbers: %d",sum);
}

int main()
{
        int c[10],n,sum=0;
        int *p;
        p=c;
        getinput(&n,p);
        add(p,n,&sum);
        output(sum);
}
