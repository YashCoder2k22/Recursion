#include<stdio.h>
void printevenN(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printevenN(n);
    return 0;

}
void printevenN(int a)
{
    if(a>0)
    {
    printevenN(a-1);
    printf("%d ",2*a);
    }
}