#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,s;
    printf("enter low and high and step\n");
    scanf("%d%d%d",&a,&b,&s);
    for(a;a<=b;a+=s)
    {
        printf("%d\n",a);

    }
    return 0;
}
