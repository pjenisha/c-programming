#include<stdio.h>
int main()
{
	int f,gm;
	int div;
	printf("enter the no. of subject failed in\n");
	scanf("%d",&f);
	printf("enter the division \n");
	scanf(" %c",&div);
	switch(div)
	{
		case'1':
		if(f>3)
		{
			printf(" no grace marks");
		}
		else
		{
			gm=5*f;
			printf("grace marks is %d",gm);
		}
		break;
		case'2':
		if(f>2)
			printf("no grace marks");
		}
		else{
			gm=4*f;
			printf("grace marks is %d",gm);
		}
		break;
		case'3':
		if(f>1)
		{
			printf("no grace marks");
		}
		else
		{
			gm=5*f;
			printf("grace marks in %d",gm);
		}
		break;
		default;
		printf("enter 1,2 or 3 division");
	}
	printf(" Name: Jenisha Pandit\n Roll no: 61\n Lab no:8");
	return 0;	
}
