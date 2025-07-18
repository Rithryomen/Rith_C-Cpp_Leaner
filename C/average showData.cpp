#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
float k,m,e,av;
void average(){
	av=(k+m+e)/3;
}
void showData(){
	p("%.2f\t %.2f\t %.2f\t =%.2f\n",k,m,e,av);
}
int main(){
	p("Enter Khmer= "); s("%f",&k);
	p("Enter Math= "); s("%f",&m);
	p("Enter English= "); s("%f",&e);
	average();
	showData();
 return 0;
}
