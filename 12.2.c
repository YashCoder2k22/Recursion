#include<stdio.h>
void revprintn(int);
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    revprintn(n);
    return 0;
}
void revprintn(int a)
{
    if(a>0)
    {
    printf("%d ",a);
    revprintn(a-1);
    }
}