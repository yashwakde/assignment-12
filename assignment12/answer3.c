
#include<stdio.h>
void odd(int n);
int main()
{   
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    odd(n);
    return 0;
}
void odd(int n)
{
    if(n>1)
    {    
       odd(n-=2);
       printf("%d ",n);
    }
}