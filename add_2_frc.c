#include<stdio.h>

struct fraction
{
        int num;
        int den;

};
void getinput(struct fraction *f1,struct fraction *f2)

{
        printf("Enter the numertor of the fraction1:");
        scanf("%d",&f1->num);
        printf("Enter the denominator of the fraction1:");
        scanf("%d",&f1->den);
        printf("Enter the numerator of the fraction2:");
scanf("%d",&f2->num);
        printf("Enter the denominator of the fraction2:");
        scanf("%d",&f2->den);
}

int gcd(int a,int b)
{
        int r;
        while(b>0)
        {
                r=a%b;
                a=b;
                b=r;


        }
        return a;
}

int sum(struct fraction f1,struct fraction f2, struct fraction *res,int lcm)
{

        int a=f1.den;
        int b=f2.den;
        int Gcd=gcd(a,b);
        lcm=(a*b)/Gcd;
        res->num=((f1.num*lcm)/f1.den)+((f2.num*lcm)/f2.den);
        res->den=(f1.den*f2.den);
        return 0;
}

void output(struct fraction res)
{
-- INSERT --           
