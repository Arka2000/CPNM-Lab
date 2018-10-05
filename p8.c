#include <stdio.h>

int main()
{
  int n,s=0,i,j;
  
  printf("Enter a no = ");
  scanf("%d",&n);
  
  for(i=1;i<=n;i++)
  {
          
      for(j=1;j<=i;j++)
       if(i%j==0)
        s+=j;
       
     
     printf(" %d@ ",i);
     
     if(i<n)
     printf("+");
       
   } 
   
   printf(" = %d",s);
 }  
   
