#include<stdio.h>
#include<conio.h>
#define p printf
int main(){
	int i,r;
	for(i=1;i<=10;i++){
		for(r=i;r<=10;r++){  //you can change r=1;r<=i for opposite output.
			//p("%d * %d =%d\n",r,i,i*r);
			p("*");
		}
		p("\n");
	}
}
