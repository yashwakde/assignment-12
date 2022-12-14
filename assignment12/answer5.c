
#include<stdio.h>
void even(int n);
int main()
{   
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    even(n);
    return 0;
}
void even(int n)
{
    if(n>0)
    {    
       even(n-2);
       printf("%d ",n);
    }
}