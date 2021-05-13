#include <stdio.h>
#include <math.h>
#include "header.h"


void main() {
	float a,b,res;
	char c,s;
	do{
	    printf("please enter an operation\n");
	scanf("%f",&a);
	scanf(" %c",&c);
	scanf("%f",&b);
    operation(a,c,b);
 printf("do you want to continue\n");
 scanf(" %c",&s);
 printf("your input was %c",s);
	}while(s=='y');
}
