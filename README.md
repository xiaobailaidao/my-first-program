//this is an easy taxi pay program
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float   x,y;
    printf("请输入里程 ");
    scanf("%f",&x);
    if(x<=2)
    {
       y= 10;
    }
    else
    {
        y=10+2.5*(x-2);
    }
    printf("应付%.2f元",y);
    return  0;
}
