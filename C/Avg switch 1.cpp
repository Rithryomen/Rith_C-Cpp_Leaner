#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define p printf
#define s scanf
int main(){
	int avg;
	char ch;
	do{
		system("cls");
		p("Enter Average="); s("%d",&avg);
		switch(avg/10){
			case 10:
				p("Grade A\n");
				break;
			case 9:
				p("Grade B\n");
				break;
			case 8:
				p("Grade C\n");
				break;
			case 7:
				p("Grade D\n");
				break;
			case 6:
			case 5:
				p("Grade E\n");
				break;
			case 4:
			case 3:
			case 2:
				p("Grade F\n");
				break;
				defualt:
					p("Plong song!\n");
		}
		p("Press Anykey To Continue:"); //used for input again
		ch=getch();
	}while(ch!=27);
}
