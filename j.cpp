#include<stdio.h>
int main(){
int x;
int y;
int grace;
printf("enter the division obtained by student");
scanf ("%d",&x);
printf("enter the failed subject ");
scanf("%d",&y);
switch(x){
case 1:
if(y>3){
printf("he doesn't got any grace");}
else{
grace=5*y;
printf("%d is grace", grace);}
break;
Case2:
if(y>2){
printf("He doesn't got grace");}
else{
grace=4*y;
printf(" %d is grace",grace);}
break;
case 3:
if(y>3){ 
printf("He doesn't got grace");}
else{
grace=5*y;
printf("%d is grace",grace);}
break;} 
return 0;
}
