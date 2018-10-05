#include <stdio.h>

int main()
{
   int i,j;
   
   float s=0,p;
   
   for(i=1;i<=7;i++)
   {
      p=1;   
   
      for(j=1;j<=i;j++)
      p=p*j;
      
      s=s+((float)i/p);
   
     printf(" %d/%d! ",i,i);
     
     if(i<7)
     printf("+");
   }
   
   printf("= %d",s);
   
  }
     
        
      
