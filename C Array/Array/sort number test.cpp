#include<stdio.h>
#define p printf
#define s scanf
int main(){
	int i,n,j,x[20],temp;
	p("Enter n Times Number: "); s("%d",&n);
	for(i=0;i<n;i++){
		p("Input Number: "); s("%d",&x[i]);
	}
	//Output Before Sort
	p("\n==> Output Before Sort Number: <==\n");
	for(i=0;i<n;i++){
		p("Number = %d\n",x[i]);
	}
	//Sort
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(x[i]<x[j]){
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
	//Output After Sort
	p("\n==> Output After Sort Number: <==\n");
	for(i=0;i<n;i++)
	p("Number = %d\n",x[i]);
}
