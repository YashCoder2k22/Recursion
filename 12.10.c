#include<stdio.h>
void printrev(int);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printrev(n);
    return 0;
}
void printrev(int a)
{
    if(a>0)
    {
    printf("%d",a%10);
    printrev(a/10);
    }
}