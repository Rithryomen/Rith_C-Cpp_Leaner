#include<stdio.h>
#include<conio.h>
#define p printf
int main(){
	int i=1;
	while(!kbhit()){
		p("%8d", i);
		i++;
	}
}
