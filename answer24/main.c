#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,x;
    scanf("%d",&a);
    x=a;
    for(i=0;a>0;)
    {
        a=a/10;
        i++;
    }
    int can[i],c=0,b,u=0,y;
    for(i=0;x>0;)
    {
        b=x%10;
        x=x/10;
        can[i]=b;
        i++;
        c++;
    }
    for(y=0;y!=c-1;)
    {
        for(i=0;i!=c;)
        {
            if(can[y]==can[i])
            {
                u++;
            }
            i++;
        }
        printf("%d sayisindan %d kadar var.\n",can[y],u);
        y++;
        u=0;
    }


    return 0;
}
