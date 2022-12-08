#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1000,b=2000,s;
    for(a;b>=a;a+=2)
    {
        printf("%d\n",a);
        s+=a;
    }
    printf("sum= %d",s);
    return 0;
}
