#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define p printf
#define s scanf
int main(){
	int a,b,c,min,max,id;
	char name[15];
	char sex;
	char ch,ch1;
	do{
		system("cls");
		p("Press 0 for Max\n");
		p("Press 1 for Min\n");
		p("Press 2 for Exit\n");
		ch=getch(); //used for input number or letters of case
		switch(ch){
			case '0':
				p("Enter Ur Id:"); s("%d",&id);
				fflush(stdin);
				p("Enter Ur Name:"); gets(name);
				p("Enter Ur Sex:"); s("%c",&sex);
				p("Enter A="); s("%d",&a);
				p("Enter B="); s("%d",&b);
				p("Enter C="); s("%d",&c);
				if(a>b)
					if(a>c)
					max=a;
					else
					max=c;
				else if(b>c)
				max=b;
				else
				max=c;
			/*	if(a>=b)
				max=a;
				else
				max=b; */
				p("%-3s-%-15s-%-3s\n","ID","Name","Sex");
				p("%-3d %-15s %-3c\n",id,name,sex);
				p("Ur Max is =%d\n",max);
				break;
			case '1':
				p("Enter Ur Id:"); s("%d",&id);
				fflush(stdin);
				p("Enter Ur Name:"); gets(name);
				p("Enter Ur Sex:"); s("%c",&sex);
				p("Enter A="); s("%d",&a);
				p("Enter B="); s("%d",&b);
				p("Enter C="); s("%d",&c);
				if(a<b)
					if(a<c)
					min=a;
					else
					min=c;
				else if(b<c)
				min=b;
				else
				min=c;
			/*	if(a>=b)
				min=b;
				else
				min=a; */
				p("%-3s-%-15s-%-3s\n","ID","Name","Sex");
				p("%-3d %-15s %-3c\n",id,name,sex);
				p("Ur Min is =%d\n",min);
				break;
			case '2':
				exit(1); //used for exit case
		}
		p("Press Anykey to Continue:");
		ch1=getch();
	}while(ch1!=27);
}
