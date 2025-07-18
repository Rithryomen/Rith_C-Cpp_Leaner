#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define p printf
#define s scanf
float averageInteger(float ,float ,float );
char averageCharacter(float avg);
int main(){
	float kh,math,eng,avg;
	char grade;
	system("color 3");
	p("Input Khmer="); s("%f",&kh);
	p("Input Math="); s("%f",&math);
	p("Input English="); s("%f",&eng);
	
	avg=averageInteger(kh,math,eng);
	p("Your Average is=%.2f\n\n",avg);
	
	grade=averageCharacter(avg);
	printf("Your Grade Is: %c\n",grade);
}
float averageInteger(float kh,float math,float eng){
	return (kh+math+eng)/3;
}
char averageCharacter(float avg){
	if(avg>=95)
	return 'A';
	else if(avg>=85)
	return 'B';
	else if(avg>=75)
	return 'C';
	else if(avg>=65)
	return 'D';
	else if(avg>=50)
	return 'E';
	else
	return 'F';
}
/*
int maximumInteger(int ,int);
int main(){
	int a,b,maximum;
	p("Enter A="); s("%d",&a);
	p("Enter B="); s("%d",&b);
	maximum=maximumInteger(a,b);
	p("Maximum is= %d\n",maximum);
}
int maximumInteger(int a,int b){
	if(a>=b)
		return a;
	else
		return b;

}*/
