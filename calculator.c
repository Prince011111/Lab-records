#include<stdio.h>
void main()
{
    int add(int,int);
    int sub();
    void nul(int ,int);
    void div()
    int a,b,c;
    printf("enter two numbers";)
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("subtract=%d\n",c);
    nul(a,b);
    div();
}
int add(Int x,int y)
{
    int  z=x+y;rturm z;
}
int sub()
{
    int x,y;
    printf("entr the two numbers");
    scanf("%d%d",&x,&y);
    int z=x- y;
    returnz;
}
voiod nul(int x,int y)
{
    int z=x*y;
    printf("nul=%d\n",z;)
}
void div()
{
    int x,y;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    if(y!=0)
    {
        int z=x/y;
        printf("div=%d",z);
    }
    else
    printf("infinite");
}