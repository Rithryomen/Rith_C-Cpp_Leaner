#include<stdio.h>
int main(){
	int id1=1,id2=2,id3=3,id4=4;
	char name1[15]="Rith  ";
	char name2[15]="Sathya";
	char name3[15]="Tou   ";
	char name4[15]="Smey  ";
	char sex1='M', sex2='M', sex3='M', sex4='M';
	char student1[20]="School:RUPP";
	char student2[20]="School:RUPP";
	char student3[20]="School:RUPP";
	char student4[20]="School:RUPP";
	float avg1=80.50,avg2=60.99,avg3=89.99,avg4=99.00;
	
	printf("%d \t %s \t %c \t %s \t %.2f \n", id1, name1, sex1, student1, avg1);
	printf("%d \t %s \t %c \t %s \t %.2f \n", id2, name2, sex2, student2, avg2);
	printf("%d \t %s \t %c \t %s \t %.2f \n", id3, name3, sex3, student3, avg3);
	printf("%d \t %s \t %c \t %s \t %.2f \n", id4, name4, sex4, student4, avg4);
	return 0;
}
