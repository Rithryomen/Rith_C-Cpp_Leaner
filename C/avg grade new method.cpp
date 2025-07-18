#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define p printf
#define s scanf
int main(){
	float M,E,P,SP,CF,TF;
	float avg;
	char g;
	char ch;
	again:
		system("cls");
		p("Input Math="); s("%f",&M);
		p("Input English="); s("%f",&E);
		p("Input Physic="); s("%f",&P);
		p("Input Program="); s("%f",&SP);
		p("Input Fundamental="); s("%f",&CF);
		p("Input TFCS="); s("%f",&TF);
		avg=(M+E+P+SP+CF+TF)/6;
		if (avg >= 95) {
    		g = 'A';
		} else if (avg >= 85) {
    		g = 'B';
		} else if (avg >= 75) {
    		g = 'C';
		} else if (avg >= 65) {
    		g = 'D';
		} else if (avg >= 50) {
    		g = 'E';
		} else {
    		g = 'F';
		}
		p("Average =%2.f\n",avg);
		p("Your Grade Is:%C\n",g);
		p("Press Anykey To Continue:\n");
		ch=getch();
		if(ch!=27)
		goto again;
		
}
