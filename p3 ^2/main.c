#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dataSize=11,i;
    int data[dataSize];
    for(i=0;i<dataSize;i++)
    {
        scanf("%d", &data[i]);
    }
    i=0;
    while(i<dataSize)
    { i++;
    if(i>4)
    {
        break;
    }
    if(data[i]>=5&&data[i]<=8)
    {printf("%d", data[i]);}
    }


return 0;
}


