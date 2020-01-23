#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dataSize,i;
    scanf("%d", &dataSize);
int a=1;
    int data[dataSize];

    for(i=1;i<=dataSize;i++)
    {
        data[i]=i;
        a=a*data[i];
    }

printf("%d", a);
    return 0;
}
