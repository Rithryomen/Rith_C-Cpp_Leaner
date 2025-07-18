#include<stdio.h>
#define p printf
#define s scanf
int main(){
	int x[10][10];
	int i,j,ss,ed;
	int k=0;
	//intput 2D Array
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			p("x[%d][%d]: ",i,j); s("%d",&x[i][j]);
		}
	}
	//output 2D Array
	p("\n==>Output Before Edit<==\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			p("%4d",x[i][j]);
		}
		p("\n");
	}
	p("Enter Number To Search: "); s("%d",&ss);
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(x[i][j]==ss){
				k=k+1;
				p("x[%d][%d]= %d\n",i,j,x[i][j]);
			}
		}
		p("\n");
	}
	if(k==0){
		p("Search Ot See Te Ah Ngob!");
	}
	//Edit Number
	p("Enter New Number: ");
	s("%d", &ed);
	for(i=0;i<3;i++){
    		for(j=0;j<4;j++){
       		if(x[i][j]==ed){
           		p("\n==>New Number<==\n");
          		p("x[%d][%d]= ",i,j);
     			s("%d",&x[i][j]);
        		}
    		}
	}
	//output 2D Array After Edit
	p("\n==>Output After Edit<==\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			p("%4d",x[i][j]);
		}
		p("\n");
	}
}
