#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,s;
    printf("enter value of low and high\n");
    scanf("%d%d",&a,&b);
    c=b-a+1;
    s=((a+b)*c)/2;
    printf("%d sum",s);
    return 0;
}
