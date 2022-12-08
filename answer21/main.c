#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,s=0,x,b,c,y;
    printf("enter number\n");
    scanf("%d",&a);
    x=a%10;
    b=a;
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
    printf("first number: %d\nlast number: %d",a,x);
    return 0;
}
