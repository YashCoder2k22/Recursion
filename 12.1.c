#include<stdio.h>
void printn(int);
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    printn(n);
    return 0;
}
void printn(int a)
{
    if(a>0)
    {
    printn(a-1);
    printf("%d ",a);
    }
}