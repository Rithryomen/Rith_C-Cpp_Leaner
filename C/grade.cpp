#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define p printf
#define s scanf
int main(){
	float Math,Eng,Pro,Phy,TFCS,CF;
	float avg;
	char grade;
	char ch;
	again:
		system("cls");
		p("input Math="); s("%f",&Math);
		p("input Eng="); s("%f",&Eng);
		p("input Program="); s("%f",&Pro);
		p("input Physic="); s("%f",&Phy);
		p("input TFCS="); s("%f",&TFCS);
		p("input CF="); s("%f",&CF);
		avg=(Math+Eng+Pro+Phy+TFCS+CF)/6;
		if(avg>=95)
		grade='A';
		if(avg>=85 && avg<95)
		grade='B';
		if(avg>=75 && avg<85)
		grade='C';
		if(avg>=65 && avg<75)
		grade='D';
		if(avg>=50 && avg<65)
		grade='E';
		else
		grade='F';
		p("Average = %.2f\n",avg);
		p("Your Grade is : %c\n",grade);
		p("Press Enter Key To Continue:\n");
		ch=getch();
		if(ch==13)
		goto again;
		
}
