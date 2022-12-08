#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s=0,a;
    printf("enter number\n");
    scanf("%d",&a);
    for(a;a>0;)
    {
        a=a/10;
        s++;
    }
    printf("digits: %d",s);
    return 0;
}
