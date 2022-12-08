#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,s=0,x,b,c,y,d,e,f;
    printf("enter number\n");
    scanf("%d",&a);
    x=a%10;
    b=a;
    d=a;
    e=a;
    for(b;b>0;)
    {
        b=b/10;
        s++;
    }
    for(c=0;c!=(s-1);)
    {
        a=a/10;
        c++;
    }
    d=a*pow(10,s-1);
    f=(e-d)+x*pow(10,s-1);
    f=(f-x)+a;
    printf("number= %d",f);
    return 0;
}
