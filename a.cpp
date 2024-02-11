#include<stdio.h>
int main()
{
	float r,s,res;
	char o;
	printf("Enter any two numbers");
	scanf("%f%f",&r,&s);
	printf("Enter any arthimetic operator");
	scanf(" %c",&o);
	switch(o)
	{
	case'+':
		res=r+s;
		break;
	case'-':
		res=r-s;
		break;
	case'*':
		res=r*s;
		break;
	case'%':
	    int res=(int)r%(int)s;
	    break;
	case'/':
		if(s!=0){
			res=r/s;
		}
		else{
		printf("Division by zero is invalid");
		}
		break;
		default:
		{printf("Enter a valid operator\n");}
		printf("The result for %f and %f is %f",r,s,res);
		printf(" Name: Jenisha Pandit\n Roll no: 61\n Lab no: 6");
		return 0;
}
