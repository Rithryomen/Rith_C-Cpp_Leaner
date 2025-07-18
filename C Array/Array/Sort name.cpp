#include<stdio.h>
#include<string.h>
#define p printf
#define s scanf
int main(){
	char name[15][20],temp[20];
	int i,n;
	p("Enter Amount Of Students:"); s("%d",&n);
	for(i=0;i<n;i++){
		p("Enter Name: "); fflush(stdin); gets(name[i]);
	}
	//Output Before Sort
	p("\n==> Output Before Sort: <==\n");
	for(i=0;i<n;i++)
	p("Name : %s\n",name[i]);
	//Sort
	for(i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(strcmpi(name[i],name[j])>0){
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
	//Output After Sort
	p("\n==> Output After Sort: <==\n");
	for(i=0;i<n;i++)
	p("Name : %s\n",name[i]);
}
