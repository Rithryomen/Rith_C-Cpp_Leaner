#include<stdio.h>
int main(){
	float Math,English,Program,Physic,CF,tfst;
	float average;
	printf("Enter Math= ");
	scanf("%f", &Math);
	printf("Enter English= ");
	scanf("%f", &English);
	printf("Enter Program= ");
	scanf("%f", &Program);
	printf("Enter Physic= ");
	scanf("%f", &Physic);
	printf("Enter CF= ");
	scanf("%f", &CF);
	printf("Enter tfst= ");
	scanf("%f", &tfst);
	average=(Math+English+Program+Physic+CF+tfst)/6;
	
	printf("Math= %.2f \t Enlish= %.2f \t Program= %.2f \t Physic= %.2f \t CF= %.2f \t tfst= %.2f \t average= %.2f\n",Math, English, Program, Physic, CF, tfst, average);
	return 0;
}
