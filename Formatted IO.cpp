#include<stdio.h>  
#include<conio.h>
int main(){
	char ch;
	int n;
	float f;
	long double l;
	printf("please enter a character\n");
	scanf("%c",&ch);
	printf("please enter an integer\n");
	scanf("%d",&n);
	printf("please enter a float\n");
	scanf("%f",&f);
	printf("please enter a long double\n");
	scanf("%Lf",&l);
	printf(" character is %c\n integer is %d\n float is %f\n long double is %Lf\n",ch,n,f,l);
	printf(" Name:Jenisha Pandit\n Roll no:31\n Lab no:07\n");
	getch();
	return 0;
}
