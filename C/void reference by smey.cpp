#include<stdio.h>
void showData(char ch){
  printf("Sex=%c",ch);
}
void showData(char *n){
  printf("Name=%s\n",n);
}
int main(){
  char sex='M';
  char name[20]="Yang Raksmey";
  showData(name);
  showData(sex);
}

