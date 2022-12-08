#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,s=0,t=1;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a);
        s=s+a;
        t=t*a;
    }
    printf("sum= %d and product= %d",s,t);
    return 0;
}
