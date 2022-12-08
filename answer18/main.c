#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n,i,c;
    printf("enter number\n");
    scanf("%d",&n);
    b=n;
    for(i=0;b!=0;)
    {

        c=b%2;
        b=b/2;
        i++;
    }

    int kume[i];
    for(i=0;n!=0;)
    {

        a=n%2;
        n=n/2;
        kume[i]=a;
        i++;
    }

    i-=1;

    for(i;i>=0;)
    {
        printf("%d ",kume[i]);
        i--;
    }
    return 0;
}
