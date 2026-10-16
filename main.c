//this is an easy taxi pay program
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float   x,y;
    printf("please input mileage ");//  我加了一个空格，我觉得可以将输入数字和前面内容隔开
    scanf("%f",&x);
    if(x<0)
    {
        printf("Are you ok?");
    }
    else
    {
        if(x<=2)
        {
           y= 10;
        }
        else
        {
            y=10+2.5*(x-2);
        }
        printf("Should pay%.2f:",y);
    }
    return  0;
}
