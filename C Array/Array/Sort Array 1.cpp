#include<stdio.h>
#include<conio.h>
#include<conio.h>
#define p printf
#define s scanf
int main(){
	int x[15],temp;
	int n,i;
	p("Enter n number:"); s("%d",&n);
	for(i=0;i<n;i++){ //Input Array
		p("x[%d] = ",i); s("%d",&x[i]);
	}
	//Output Array Befor Sort
	p("\n=>Output Array Before sort<=\n\n");
	for(i=0;i<n;i++){
		p("x[%d] = %d\n",i,x[i]);
	}
	//Sort
	for(i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(x[i]<x[j]){
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	p("\n=>Output After Array<=\n\n");
	for(i=0;i<n;i++){
		p("x[%d] = %d\n",i,x[i]);
	}
} //Powered By Rith
