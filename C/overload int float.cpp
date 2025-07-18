#include<stdio.h>
#define p printf
int minus(int a,int b){
	return a-b;
}
int minus(int a,int b,int c){
	return a-b-c;
}
float minus(float a,float b){
	return a-b;
}
int main(){
	int a=33,b=22,c=11;
	float x=66.00,y=22.50;
	p("Minus a and b = %d\n",minus(a,b));
	p("Minus a,b, and c = %d\n",minus(a,b,c));
 	p("Minus x and y = %.2f",minus(x,y));
}
