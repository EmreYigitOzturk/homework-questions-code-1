#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    float s=0;
    scanf("%d",&n);
    if(n%2!=0)
    {
       s=s+pow(n,(-1));
       n--;
    }
    for(n;n>1;n=n-2)
    {
        s=s+pow(n,(-1));
    }
    printf("sum= %f",s);
    return 0;
}
