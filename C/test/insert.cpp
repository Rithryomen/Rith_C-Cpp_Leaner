#include<stdio.h>
#include<stdlib.h>
#define p printf
#define s scanf
int main(){
	int x[20],n,i,pos,add;
	char ch;
	do{
		system("cls");
		system("color 7");
		do{
			p("Enter n Time Of Number: "); s("%d",&n);
		}while (n<0 || n>20);
		for(i=0;i<n;i++){
			p("x[%d]= ",i); s("%d",&x[i]);
		}
		p("\n==> Output Before Add: <==\n");
		for(i=0;i<n;i++)
			p("X: %5d\n",x[i]);
		p("\n==> Input Elements You One Two Add: "); s("%d",&add);
		do{
			p("\n=> Which Positions: "); s("%d",&pos);
		}while (pos<0 || pos>n);
		n++;
		for(i=n;i>pos;i--)
			x[i]=x[i-1];
			x[i]=add;
		p("\n==> Output After Add: <==\n");
		for(i=0;i<n;i++)
			p("Result: %5d\n",x[i]);
		p("\n==> Press Anykey To Fab: <==");
		ch=getchar();
		ch=getchar();
	}while(ch!=27);

}
