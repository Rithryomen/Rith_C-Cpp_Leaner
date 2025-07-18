#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
int main(){
	int id[20][4];
	char st_name[20][50];
	char sex[20];
	char add[20][100];
	char st_school[20][100];
	int n;
	p("Enter n Loop : "); s("%d",&n);
	//input Array
	for(int i=0;i<n;i++){
		p("Id[%d] = ",i); s("%d",&id[i]);
		p("Name[%d] = ",i); fflush(stdin); gets(st_name[i]);
		p("Sex: M/F [%d] = ",i); s("%c",&sex[i]);
		p("Address[%d] = ",i); s("%s",&add[i]);
		p("School[%d] = ",i); fflush(stdin); gets(st_school[i]);
		p("\n------------------------------------\n");
	}
	for(int i=0;i<n;i++){    //Output Array
		p("Id[%d] = %d\n",i,id[i]);
		p("Name[%d] = %s\n",i,st_name);
		p("Sex[%d] = %c\n",i,sex[i]);
		p("Address[%d] = %s\n",i,add[i]);
		p("School[%d] = %s\n",i,st_school);
		p("\n------------------------------------\n");
	}
}
