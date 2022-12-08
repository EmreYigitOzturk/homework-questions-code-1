#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter first number(the biggest one) and second number\n");
    scanf("%d%d",&a,&b);
    for(a;a>0;)
    {   if(a>b)
        {
            c=a;
            a=b;
            b=c;
        }
        b=b-a;
    }

    printf("%d",b);
    return 0;
}
