#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
int x,y,z,max;
void maximum(){
	p("Enter X: "); s("%d",&x);
	p("Enter Y: "); s("%d",&y);
	p("Enter Z: "); s("%d",&z);
	max=x;
	if(max<y)
	max=y;
	if(max<z)
	max=z;
}
void showData(){
	p("Your Max Is: %d",max);n
}
int main(){
	maximum();
	showData();
}
/*float pay,dis,total;
void Discount(){
	p("Input Pay= "); s("%f",&pay);
	if(pay<500)
	dis=pay*0.02;
	else if(pay<1000)
	dis=pay*0.05;
	else if(pay<1500)
	dis=pay*0.09;
	else
	dis=pay*0.12;
	total=pay-dis;
}
void showData(){
	p("Your Pay= %.2f\n Your Discount= %.2f\n Total= %.2f ",pay,dis,total);
}
int main(){
	Discount();
	showData();
}*/
