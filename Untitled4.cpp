#include<stdio.h>
int main(){
	float r,s,res;
	char o;
	printf("Enter any two numbers");
	scanf("%f %f",&r,&s);
	printf("Enter any airthmetic operator:");
	scanf("%c",&o);
	switch(o){
		case '+':
			res= r+s;
			break;
		case '-':
			res= r-s;
			break;
		case'*':
			res= r*s;
			break;
		case'%':
			res=(int)r % (int) s;
			break;
		case'/':
			if(s!=0){
			res= r/s;
			}
		    else{
		    printf("Division by zero is invalid");	
			}
			break;
			default:
				printf("Enter a valid operator\n");
	}
	printf("The result %f and %f is %f\n",r,s,res);
	printf(" Name:Jenisha Pandit\n Roll No:61\n Lab No:6");
	return 0;
}
