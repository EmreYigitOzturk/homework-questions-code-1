#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter low and high and number.\n");
    scanf("%d%d%d",&a,&b,&c);
    for(a;a<=b;a++)
    {
        if(a%c==0)
        {
           printf("%d\n",a);
        }
    }
    return 0;
}
