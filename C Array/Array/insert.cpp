#include<stdio.h>
#define p printf
#define s scanf
int main(){
	int x[20],n,i,pos,add;
	do{
		p("Enter n number="); s("%d",&n);
	}while (n<0 || n>20);
	for(i=0;i<n;i++){
		p("x[%d]= ",i); s("%d",&x[i]);
	}
	p("\n==> Output Before Add: <==\n");
	for(i=0;i<n;i++)
		p("%5d",x[i]);
	p("\nPlease Input An Element That You One 2 Add: "); s("%d",&add);
	do{
		p("\nWhich Pos: "); s("%d",&pos);
	}while (pos<0 || pos>n);
	n++;
	for(i=n-1;i>pos;i--)
		x[i]=x[i-1];
		x[i]=add;
	p("\n==> Output After Add: <==\n");
	for(i=0;i<n;i++)
		p("%5d",x[i]);
}
