#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define p printf
#define s scanf
/*int main(){
	int id[20];
	char st_name[20][50];
	char sex[20];
	char st_add[20][50];
	char st_school[20][50];
	int n,i;
	char ch;
	do{
		system("cls");
		system("color 3");
		p("Enter n Loop : "); s("%d",&n);
		//input Array
		for(i=0;i<n;i++){
			p("Id[%d] = ",i); s("%d",&id[i]);
			p("Name[%d] = ",i); fflush(stdin); gets(st_name[i]);
			p("Sex: M/F [%d] = ",i); s("%c",&sex[i]);
			p("Address[%d] = ",i); fflush(stdin); gets(st_add[i]);
			p("School[%d] = ",i); fflush(stdin); gets(st_school[i]);
			p("\n------------------------------------\n\n");
		}
		/*for(int i=0;i<n;i++){   //Output Array
			p("Output Result Is: \n\n");
			p("Id[%d] = %d\n",i,id[i]);
			p("Name[%d] = %s\n",i,st_name[i]);
			p("Sex[%d] = %c\n",i,sex[i]);
			p("Address[%d] = %s\n",i,st_add[i]);
			p("School[%d] = %s\n",i,st_school[i]);
			p("\n------------------------------------\n");
		}
		for(i=0;i<n;i++){
			p("%-4s %-30s %-3s %-30s %-30s\n","ID:","Name:","Sex:","Address:","School:");

			p("%-4d %-30s %-3s %-30s %-30s\n",id[i],st_name[i],sex[i],st_add[i],st_school[i]);
			}
		p("Press Anykey To Continue:");
		ch=getch();
	}while(ch!=27);
}*/
int main(){
  int id[20];
  char st_name[20][50];
  char sex[20];
  char st_add[20][50];
  char st_school[20][50];
  int n,i;
  char ch;
  do{
    system("cls");
    system("color 3");
    p("Enter n Loop : "); s("%d",&n);
    //input Array
    for(i=0;i<n;i++){
      p("Id = "); s("%d",&id[i]);
      p("Name = "); fflush(stdin); gets(st_name[i]);
      p("Sex: M/F  = "); s("%c",&sex[i]);
      p("Address = "); fflush(stdin); gets(st_add[i]);
      p("School = "); fflush(stdin); gets(st_school[i]);
      p("\n------------------------------------\n\n");
    }
    /*for(int i=0;i<n;i++){   //Output Array
      p("Output Result Is: \n\n");
      p("Id[%d] = %d\n",i,id[i]);
      p("Name[%d] = %s\n",i,st_name[i]);
      p("Sex[%d] = %c\n",i,sex[i]);
      p("Address[%d] = %s\n",i,st_add[i]);
      p("School[%d] = %s\n",i,st_school[i]);
      p("\n------------------------------------\n");
    }*/
    for ( i = 0 ; i < n ; i++){
     p ("%-4s %-30s %-3s %-30s %-30s\n","ID:","Name:","Sex:","Address:","School:");
      p("%-4d %-30s %-3c %-30s %-30s\n",id[i],st_name[i],sex[i],st_add[i],st_school[i]);
    }
    p("Press Anykey To Continue:");
    ch=getch();
  }while(ch!=27);
}

