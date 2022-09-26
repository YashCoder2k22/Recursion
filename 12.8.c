#include<stdio.h>
void dectobin(int);
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    dectobin(n);
    return 0;

}
void dectobin(int a)
{
    if(a==1)
    printf("1");
    else
    {
    dectobin(a/2);
    printf("%d",a%2);
    }
}
