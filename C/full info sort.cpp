#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
  int x[15],sum=0,i1,n1;
  int id[15],score[15],i2,n2;
  char name[15][50],sex[15],add[15][50],school[15][50];
  int num[15],i3,n3,j,temp;
  char ch,ch1;
  do{
    system("cls");
    printf("Press Key 1 For Sum Number:\n");
    printf("Press Key 2 For Info Student:\n");
    printf("Press Key 3 For Sort Number:\n");
    printf("Press e Key For Exit\n");
    printf("\n\n============================\n\n");
    ch=getch();
    switch(ch){
      case '1':
        printf("Input Arr:");scanf("%d",&n1);
        for ( i1 = 0 ; i1 < n1 ; i1++){
          printf("X: ");scanf("%d",&x[i1]);
          sum=sum+x[i1];
        }
        printf("\n\n============================\n\n");

        for ( i1 = 0 ; i1 < n1 ; i1++){
          printf("X: %d\n",x[i1]);
        }
        printf("Sum: %d\n",sum);
        break;

      case '2':
        printf("Input Number Of Student:");scanf("%d",&n2);
        for ( i2 = 0 ; i2 < n2 ; i2++){
          printf("Id:");scanf("%d",&id[i2]);
          printf("Name:");fflush(stdin);
          gets(name[i2]);
          printf("Sex:");scanf("%c",&sex[i2]);
          printf("Score:");scanf("%d",&score[i2]);
          printf("Address:");fflush(stdin);
          gets(add[i2]);
          printf("School:");fflush(stdin);
          gets(school[i2]);
          printf("\n\n============================\n\n");
        }
        for ( i2 = 0 ; i2 < n2 ; i2++){
          printf("Id: %d\t\t Name: %s\t\t Sex: %c\t\t Score: %d\t\t Address: %s\t\t School: %s\n ",id[i2],name[i2],sex[i2],score[i2],add[i2],add[i2],school[i2]);
          printf("\n\n============================\n\n");
        }
        break;

      case '3':
        printf("Input n number:");scanf("%d",&n3);
        printf("\n\n==========Input Number=============\n\n");

        for ( i3 = 0 ; i3 < n3 ; i3++){
          printf("Number: ");scanf("%d",&num[i3]);
        }

        printf("\n\n==========Output Before Sorted=============\n\n");

        for ( i3 = 0 ; i3 < n3 ; i3++){
          printf("Number: %d\n",num[i3]);
        }

        printf("\n\n==========Output After Sort=============\n\n");

        for ( i3 = 0 ; i3 < n3 - 1 ; i3++){
          for ( j = i3 + 1 ; j < n3 ; j++){
            if( num[i3] < num[j] ){
            temp=num[i3];
            num[i3]=num[j];
            num[j]=temp;
            }
          }
        }

        for ( i3 = 0 ; i3 < n3 ; i3++){
          printf("Number: %d\n",num[i3]);
        }
        break;
      case 'e':
        exit(1);

    }
    printf("Press Enter To Continue:\n");
    ch1=getch();
  }while(ch1==13);

  return 0;

}
