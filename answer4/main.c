#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    printf("write the celcius.\n");
    scanf("%d",&c);
    if(c>0)
    {
        printf("%d above.",c);
    }
    else
    {
        printf("%d below.",c);
    }
    return 0;
}
