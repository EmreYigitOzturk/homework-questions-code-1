#include <stdio.h>
#include <stdlib.h>

int main()
{

    int f,c;
    printf("write the fahrenheit\n");
    scanf("%d",&f);
    c=((f-32)*5)/9;
    printf("%d celsius",c);
    return 0;
}
