#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter three number.\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b&&a>c)
    {
        printf("the largest %d",a);
    }
    else if (b>a&&b>c)
    {
        printf("the largest %d",b);
    }
    else
    {
        printf("the largest %d",c);
    }
    return 0;
}
