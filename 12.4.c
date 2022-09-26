#include<stdio.h>
void revoddprintn(int);
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    revoddprintn(n);
    return 0;
}
void revoddprintn(int a)
{
    if(a>0)
    {
        printf("%d ",2*a-1);
        revoddprintn(a-1);
    }
}