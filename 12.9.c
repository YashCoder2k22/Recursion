#include<stdio.h>
void dectooct(int);
int main()
{
    int n;
    printf("Enter an octadecimal number");
    scanf("%d",&n);
    dectooct(n);
}
void dectooct(int a)
{
    if(a<8)
    printf("%d",a);
    else
    {
    dectooct(a/8);
    printf("%d",a%8);
    }
}
