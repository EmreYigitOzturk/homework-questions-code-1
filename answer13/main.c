#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,s=1;
    printf("enter number.\n");
    scanf("%d",&a);
    for(a;a>1;a--)
    {
        s=s*a;
    }
    printf("sum= %d",s);
    return 0;
}
