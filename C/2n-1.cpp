#include<stdio.h>
#define p printf
#define s scanf
int main(){
	int n,i,sum=0;
    p("Input n=");
    s("%d", &n);
	i=1;
	while(i<=n){
		sum=sum+2*i-1;
		p("%d + ",2*i-1);
		i++;
	}
	p("\nS= %d",sum);
}
