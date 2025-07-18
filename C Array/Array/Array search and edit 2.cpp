#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
int main(){
    int x[15],i,n,se,k=0;
    p("Input n Number: "); s("%d",&n);
    //Input Array
    for(i=0;i<n;i++){
        p("x[%d] = ",i); s("%d",&x[i]);
    }
    //Output Before Search And Edit
    p("\n=> Output Before Edit: <=\n");
    for(i=0;i<n;i++){
        p("x[%d] = %d\n",i,x[i]);
    }
    //Search And Edit
    p("Input Number To Edit: "); s("%d",&se);
    for(i=0;i<n;i++){
        if(x[i]==se){
            p("Enter Number To Change: "); s("%d",&x[i]);
        }
    }
    p("\n=> Output Array After Edited: <=\n");
    for(i=0;i<n;i++){
        p("x[%d] = %d\n",i,x[i]);
    }
    return 0;
}

