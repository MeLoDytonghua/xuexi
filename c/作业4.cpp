#include <stdio.h>
#include <iostream>  //标准输入输出流
int main()
{
    int a,b,c,A1,A2,A3;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        {
            if(a>c)
                if(b>c)
                    A1=a,A2=b,A3=c;
                else
                    A1=a,A2=c,A3=b;
            else
                A1=c,A2=a,A3=b;
        }
    else
        {
            if(b>c)
                if(a>c)
                    A1=b,A2=a,A3=c;
                else
                    A1=b,A2=c,A3=a;
            else
                A1=c,A2=b,A3=a;
        }
    std::cout<<"依次排列为"<<A1<<" "<<A2<<" "<<A3<<std::endl;
}