#include<stdio.h>
int main(){
	float x,y,z;
	char ch;
	printf("Enter the value of x and y");
	scanf("%f %f",&x,&y);
	printf("Enter any arithmetic operator:");
	scanf(" %c",&ch);
	switch(ch){
		case '+':
			z= x+y;
 printf(" the sum of %f and %f is %f"x,y,z);
			break;
		case '-':
			z=x-y;
printf(" the difference is of %f and %fis %f", x,y,z);
			break;
		case'*':
			z=x*y;
printf("the product of %f and %f is %f",x,y,z);
			break;
		case'%':
			z= x%y;
printf("the reminder of %f and %f is %f",x,y,z);
			break;
		case'/':
			z=x/y;
			printf("the division of %f and %f is %f",x,y,z);
break;

			
		
		  
			
			break;
			default:
				printf("Enter a valid operator\n");
	}

	printf("Name:Jenisha Pandit\n Roll No:61\n Lab No:6");
	return 0;
}
