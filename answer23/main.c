#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,s=0,b,x;
    printf("enter number\n");
    scanf("%d",&a);
    x=a;
    for(a;a>0;)
    {
        b=a%10;
        a=a/10;
        s=s*10+b;
    }
    if(x==s)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}
