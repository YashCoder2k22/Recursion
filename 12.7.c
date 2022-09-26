#include<stdio.h>
void printsquN(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printsquN(n);
    return 0;

}
void printsquN(int a)
{
    if(a>0)
    {
    printsquN((a-1));
    printf("%d ",a*a);
    }

}