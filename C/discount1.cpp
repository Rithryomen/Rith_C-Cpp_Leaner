#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define p printf
#define s scanf
int main(){
	float pay,dis,total;
	char ch;
	again:
		system("cls");
	p("Enter Pay="); s("%f",&pay);
	if(pay>=1500)
	dis=pay*0.15;
	if(1000>=pay<1500)
	dis=pay*0.12;
	if(500>=pay<1200)
	dis=pay*0.09;
	if(pay<500)
	dis=pay*0.05;
	total=pay-dis;
	p("%.2f \t %.2f \t %.2f\n",pay,dis,total);
	p("Press Key Enter to Continue:\n");
		ch=getch();
		if(ch==13)
		goto again;
	return 0;
}
