#include<stdio.h>
#include<string.h>
#define p printf
#define s scanf
int main(){
	int id[15],n,i;
	char name[15][50],sex[15];
	float avg[15];
	p("Enter Number of Students: "); s("%d",&n);
	for(i=0;i<n;i++){
		p("ID: "); s("%d",&id[i]);
		p("Input Name: "); fflush(stdin); gets(name[i]);
		p("Sex (M/F): "); s("%c",&sex[i]);
		p("Enter Average: "); s("%f",&avg[i]);
	}
	p("\n==> Output Ur Lists Is Ready: <==\n");
	for(i=0;i<n;i++){
		p("%d \t %s \t %c \t %.2f\n",id[i],name[i],sex[i],avg[i]);
	}
}
