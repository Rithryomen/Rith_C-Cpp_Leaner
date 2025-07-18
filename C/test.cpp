#include<stdio.h>
int main(){
	int id;
	char name[20];
	char sex;
	char add[20];
	float avg;
	printf("input id="); scanf("%d",&id);
	fflush(stdin);
	printf("input name="); gets(name);
	printf("input sex="); scanf("%c",&sex);
	fflush(stdin);
	printf("input add="); gets(add);
	printf("input avg="); scanf("%f",&avg);
	
	printf("%-3d %-15s %-4c %-10s %-10.2f",id,name,sex,add,avg);
}
