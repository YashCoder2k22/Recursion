#include<stdio.h>
void oddprintn(int);
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    oddprintn(n);
    return 0;
}
void oddprintn(int a)
{
    if(a>0)
    {
        oddprintn(a-1);
        printf("%d ",2*a-1);
    }
}