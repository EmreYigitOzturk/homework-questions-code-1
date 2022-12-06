#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    scanf("%d",&sayi);
    if (sayi%2==0)
    {
        printf("%d cifttir.",sayi);
    }
    else
    {
        printf("%d tekdir.",sayi);
    }
    return 0;
}
