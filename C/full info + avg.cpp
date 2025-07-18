#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int id;
	char name[14];
	char sex;
	char add[20];
	float Math,Eng,CF,Physic,TFCS,Program;
	float average;
	printf("input id="); scanf("%d",&id);
	fflush(stdin);
	printf("input name="); gets(name);
	printf("input sex(F/M)="); scanf("%c",&sex);
	fflush(stdin);
	printf("input add="); gets(add);
	printf("input Math="); scanf("%f",&Math);
	printf("input Eng="); scanf("%f",&Eng);
	printf("input CF="); scanf("%f",&CF);
	printf("input Physic="); scanf("%f",&Physic);
	printf("input TFCS="); scanf("%f",&TFCS);
	printf("input Program="); scanf("%f",&Program);
	average=(Math+Eng+CF+Physic+TFCS+Program)/6;
	
	printf("%-4s %-15s %-4s %-10s %-5s %-5s %-5s %-5s %-4s %-5s %-5s\n", "ID", "Name", "Sex", "Address", "Math", "Eng", "CF", "Physic" , "TFCS" , "Program" , "Average");
	printf("%-4d %-15s %-4c %-10s %-4.2f %-4.2f %-4.2f %-4.2f %-4.2f %-4.2f = %.2f",id,name,sex,add,Math,Eng,CF,Physic,TFCS,Program,average);
	return 0;
} 
