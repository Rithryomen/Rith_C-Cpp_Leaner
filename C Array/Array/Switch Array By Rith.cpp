#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#define p printf
#define s scanf
int main(){
    int x[20], sum = 0, r, n, n1, n2, n3, c;
    int id[20], rank[20], nb[20], i, j, temp;
    char name[20][50], sex[20], add[20][50], sch[20][50];
    char ch, ch1;
    char names[20][50],temp1[20];
    int k,o;

    do {
        system("cls");
        system("color 3");
        p("Press 1 For X/Sum: \n");
        p("Press 2 For Info Student: \n");
        p("Press 3 For Sort High To Low Number: \n");
        p("Press 4 For Sort Low To High Number:\n");
        p("Press 5 For Sort Name Of Students:\n");
        p("Press ESC Key For Exit\n");
        p("\n=> Here You Go: <=\n");
        ch = getch();
        switch(ch) {
            case '1':
                p("Input n = "); s("%d",&n);
                sum = 0;  //Reset sum before starting
                for (r=0;r<n;r++) {
                    p("x :"); s("%d",&x[r]);
                    sum = sum + x[r];
                }
                p("\n=> Output X/Sum: <=\n");
                for (r=0;r<n;r++) {
                    p("x = %d\n",x[r]);
                }
                p("Sum = %d\n",sum);
                break;

            case '2':
                p("Enter number of students: "); s("%d",&n1);
                for (c = 0; c < n1; c++) {  //Input Array
                    p("ID: "); s("%d",&id[c]);
                    p("What's the name?: "); fflush(stdin); gets(name[c]);
                    p("Sex: M/F?: "); s("%c", &sex[c]);
                    p("Address?: "); fflush(stdin); gets(add[c]);
                    p("School?: "); fflush(stdin); gets(sch[c]);
                    p("Rank in class?: "); s("%d",&rank[c]);
                    p("\n==> Next Student <==\n");
                }
				p("\n=> Students Info Output: <=\n");

                for (c = 0; c < n1; c++) {  //Output Array
                    p("%-4s %-30s %-3s %-30s %-30s %-4s\n","ID:","Name:","Sex:","Address:","School:","Rank:");
                    p("%-4d %-30s %-3c %-30s %-30s %-4d\n",id[c],name[c],sex[c],add[c],sch[c],rank[c]);
                }
                break;

            case '3':
               p("Enter number of elements for sorting: "); s("%d",&n2);
               for (i=0;i<n2;i++) {  //Input Number
                    p("Number[%d] = ", i); s("%d", &nb[i]);
               }

               p("\n=> Output Array Before Sort: <=\n");
               for (i=0;i<n2;i++) {  //Output Before Sort.
                    p("Number = %d\n",nb[i]);
               }

               // Sorting
               for (i=0;i<n2;i++) {
                    for (j=i+1;j<n2;j++){
                        if (nb[i]<nb[j]){
                            temp = nb[i];
                            nb[i] = nb[j];
                            nb[j] = temp;
                        }
                    }
                }
               p("\n=> Output Array After Sort: <=\n");
               for (i=0;i<n2;i++) {  //Output After Sort.
               	p("Number = %d\n",nb[i]);
               }
               break;

		  case'4':
		  	p("Enter number of elements for sorting: "); s("%d",&n2);
               for (i=0;i<n2;i++) {  //Input Number
                    p("Number[%d] = ", i); s("%d", &nb[i]);
               }

               p("\n=> Output Array Before Sort: <=\n");
               for (i=0;i<n2;i++) {  //Output Before Sort.
                    p("Number = %d\n",nb[i]);
               }

               // Sorting
               for (i=0;i<n2;i++) {
                    for (j=i+1;j<n2;j++){
                        if (nb[i]>nb[j]){
                            temp = nb[i];
                            nb[i] = nb[j];
                            nb[j] = temp;
                        }
                    }
                }
               p("\n=> Output Array After Sort: <=\n");
               for (i=0;i<n2;i++) {  //Output After Sort.
               	p("Number = %d\n",nb[i]);
               }
               break;
		case'5':
			p("Enter Amount Of Students:"); s("%d",&n3);
			for(k=0;k<n3;k++){
   			 p("Enter Name: "); fflush(stdin); gets(names[k]);
			}
			//Output Before Sort
			p("\n==> Output Before Sort: <==\n");
			for(k=0;k<n3;k++)
   			 p("Name : %s\n",names[k]);
			//Sort
			for(k=0;k<n3-1;k++)
   				 for(o=k+1;o<n3;o++)
      				  if(strcmpi(names[k],names[o])>0){
           			 	strcpy(temp1,names[k]);
           			 	strcpy(names[k],names[o]);
            				strcpy(names[o],temp1);
     				   }
			//Output After Sort
			p("\n==> Output After Sort: <==\n");
			for(k=0;k<n;k++)
  			p("Name : %s\n",names[k]);
			break;


            case 27:  //ESC key pressed
                exit(0);
                break;
        }

        p("\n ==> Press Any key to Restart: <==\n");
        ch1=getch();
    } while(ch1 != 27);
} //Made By Rith~Ryomen/Mony Chanrith.
