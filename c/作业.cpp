#include <stdio.h>

int main()
{
    int a,b,max;
    scanf("%d%d",&a,&b);
    if(a>b)
        max=a;
    else
        max=b;
    printf("最大的值为%d\n",max);
}