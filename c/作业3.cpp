#include <stdio.h>
#include <iostream.h>  //标准输入输出流
int main()
{
    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
        {
         a=a+b;
         b=a-b;
         a=a-b;
        }
    if(a<c)
        {
         a=a+c;
         c=a-c;
         a=a-c;
        }
    if(b<c)
        {
        b=b+c;
        c=b-c;
        b=b-c;
        }
    cout<<a<<b<<c<<"你好"<<endl;
}