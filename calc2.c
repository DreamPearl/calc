#include <stdio.h>
#include <math.h>

int main(void) {
	float a,b,res;
	char c,s;
	do{
	    printf("please enter operation\n");
	scanf("%f",&a);
	scanf(" %c",&c);
	scanf("%f",&b);
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
 printf("do you want to continue\n");
 scanf(" %c",&s);
 printf("your input was %c",s);
	}while(s=='y');
	return 0;
}
