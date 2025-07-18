#include<stdio.h>
#define p printf
#define s scanf
int main(){
	int n,i,f=1,ss=0;
	p("Enter n= "), s("%d",&n);
	i=1;
	while(i<=n){
		f=f*i;
		ss=ss+f;
		p("%d! * \b",f);
		i++;
	}
	p("\b = %d",ss);
}
