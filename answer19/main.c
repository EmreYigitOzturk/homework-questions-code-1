#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,c,i;
    printf("enter number\n");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        c=i*a;
        printf("%d\n",c);
    }
    return 0;
}
