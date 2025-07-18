#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#define p printf
#define s scanf
/*int main(){
	char ch,ch1;
	do{
		system("cls");
		p("Press M for Monday\n");
		p("Press T for Tuesday\n");
		p("Press W for Wednesday\n");
		p("Press H for Thursday\n");
		p("Press F for Friday\n");
		p("Press S for Saturday\n");
		p("Press U for Sunday\n");
		p("Press E for Exit\n");
		p("%-9s %-6s","Date","Subjects\n");
		ch=tolower(getch()); //tolower use for convert capital letters to small letters
		switch(ch){
		case 'm':
			p("Monday Eng,Math\n");
			break;
		case 't':
			p("Tuesday Phy,Program\n");
			break;
		case'w':
			p("Wednesday Math,CF\n");
			break;
		case'h':
			p("Thursday CF,Program\n");
			break;
		case'f':
			p("Friday Program,Eng\n");
			break;
		case'u':
			p("Saturday 21CS(X2)\n");
			break;
		case'e':
			exit(1); //Used for exit the program
		}
		p("Press Anykey to Continue:"); //used for reinput
		ch1=getch();
	}while(ch1!=27);
}*/
int main(){
	char ch,ch1;
	do{
		system("cls");
		system("color 3");
		p("Press I if you love me.\n");
		p("Press L if you don't love me.\n");
		p("Press O if you hate me.\n");
		p("Press V if you want me to love you.\n");
		p("Press E if you want to block me.\n");
		p("Press U if you wanna kiss me.\n");
		p("Press X = Exit.\n");
		p("%s","Your Pick is:\n\n");
		ch=tolower(getch());
		switch(ch){
			case'l':
				p("L: Ohh, babe why don't you love me? :(\n");
				break;
			case'i':
				p("I: Are you sure babe that you love me? UwU\n");
				break;
			case'o':
				p("O: I'm so sad that you hate me babe. :c\n");
				break;
			case'v':
				p("V: Don't worry, babe, I will always love you.Muah :P\n");
				break;
			case'e':
				p("E: I'm a bad boy right? Then block me. :(\n");
				break;
			case'u':
				p("U: Aww, babe, I'm shy bcus you're kissing me. XD\n");
				break;
			case'x':
				exit(1);
		}
		p("Press Anykey to Continue:"); //used for reinput
		ch1=getch();
	}while(ch!=27);
}
