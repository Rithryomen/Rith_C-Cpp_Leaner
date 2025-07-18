#include<stdio.h>
void swap(int &max,int &min){
  int temp;
  temp=max;
  max=min;
  min=temp;
}
int main(){
  int a,b,max,min;
  printf("Enter a=");scanf("%d",&a);
  printf("Enter b=");scanf("%d",&b);
  printf("\n Output Before Swap \n");
  if(a>=b)
  max=a;
  if(a<b)
  max=b;
  printf("Your Maximum is=%d\n",max);
  if(a<b)
  min=a;
  if(a>=b)
  min=b;
  printf("Your Minimum is=%d\n",min);
  swap(max,min);
  printf("\n Output Ater Swaped \n");
  printf("Your Maximum is=%d\n",max);
  printf("Your Minimum is=%d",
  min);
}

