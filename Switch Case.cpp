#include<stdio.h>
int main(){
	char num;
	printf("enter either 1,2 or3\n");
	scanf(" %c",&num);
	switch(num)
	{
		case'1':
			printf("ONE!\n");
		case'2':
			printf("TWO!\n");
		case'3':	
		    printf("THREE!\n");
		default :
		printf("INVALID\n");   
	}
	printf(" Name: Jenisha Pandit\n Roll no: 61\n Lab no:7 ");
	return 0;
}
