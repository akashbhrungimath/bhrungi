#include<stdio.h>
struct frac
{
    int num;
    int den;
};
typedef struct frac FRAC;
FRAC input(int);
FRAC calc(FRAC,FRAC);
int gcd(int,int);
void output(FRAC,FRAC,FRAC,int);
FRAC input(int i)
{
    FRAC f;
    printf("enter the numeretor and denominator of the %d fraction=\n",i);
    scanf("%d%d",&f.num,&f.den);
    return f;
}
FRAC calc(FRAC f1,FRAC f2)
{
    FRAC f;
    float a,b;
    f.num=(f1.num*f2.den)+(f2.num*f1.den);
    f.den=(f1.den*f2.den);
    return f;
}
int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
	return a;
}
void output(FRAC f3,FRAC f2,FRAC f1,int g)
{
    printf("sum of the (%d/%d) and (%d/%d) is=%d/%d\n",f1.num,f1.den,f2.num,f2.den,f3.num/g,f3.den/g);
}
int main()
{
    FRAC f1,f2,f3;
    int g;
    f1=input(1);
    f2=input(2);
    f3=calc(f1,f2);
    g=gcd(f3.num,f3.den);
    output(f3,f2,f1,g);
    return 0;
}