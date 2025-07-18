#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define p printf
#define s scanf
int main(){
	int a,b,max;
	char ch;
	again:
		system("cls");
		p("input a="); s("%d",&a);
		p("input b="); s("%d",&b);
		if(a>=b);
		max=a;
		if(a<b);
		max=b;
		p("Maximum is =%d\n",max);
		p("Press Key Enter to Continue:\n");
		ch=getch();
		if(ch==13)
		goto again;;
}
