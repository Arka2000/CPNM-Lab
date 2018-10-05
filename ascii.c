#include <stdio.h>

int main()
{
   int n,i;
   char ch;
   
   printf("The ASCII values are");
   
   int a=0;
   
   while(a<=255)
     {
         ch=(char)(a);
         printf("%d------->%d\n",a,ch);
         
         a++;
     }
     
    }     
