#include<stdio.h>
#define p printf
#define s scanf
int a,b,c,min,max;
void swap(int &max, int &min){
	int temp;
	temp=max;
	max=min;
	min=temp;
}
void minimum(){
	min=a;
	if(min>=b)
	min=b;
	if(min>=c)
	min=c;
}
void maximum(){
	max=a;
	if(max<b)
	max=b;
	if(max<c)
	max=c;
}
int main(){
	p("Input A= "); s("%d",&a);
	p("Input B= "); s("%d",&b);
	p("Input C= "); s("%d",&c);
	maximum();
	minimum();
	p("\nOutput Max and Min Before Swap:\n");
	p("Max= %d\t Min= %d\n",max,min);
	swap(max,min);
	p("\nOutput Max and Min After Swap:\n");
	p("Max= %d\t Min= %d\n",max,min);
}
