#include<stdio.h>
void printrevevenN(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printrevevenN(n);
    return 0;

}
void printrevevenN(int a)
{
    if(a>0)
    {
    printf("%d ",2*a);
    printrevevenN(a-1);
    }
}