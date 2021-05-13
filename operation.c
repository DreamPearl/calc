#include <stdio.h>
#include <math.h>
#include "header.h"

void operation(int a,char c,int b){

    float res;

    switch(c)
     {
         case '+':
         
             res=a+b;
             printf("%f\n",res);
             break;
         
          case '-':
         
             res=a-b;
             printf("%f\n",res);
             break;
         
            case '*':
         
             res=a*b;
             printf("%f\n",res);
             break;
         
          case '/':
         
             res=a/b;
             printf("%f\n",res);
             break;
         
         default:
         printf("operator not found\n");
         break;
         

         
     }
  

}
