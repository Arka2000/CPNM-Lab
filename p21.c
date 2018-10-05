#include <stdio.h>

int main()
{
    int c=0,n;
    
    
    printf("Enter a No= ");
    scanf("%d",&n);
    
    for(;n!=1;c++)
    {
       if(n%2==0)
       n=n/2;
       
       else
       n=n*3+1;
       
       if(c>0)
       printf("Next Value is %d\n",n);
       
    }
    
 }      


