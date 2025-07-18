#include<stdio.h>
#include<string.h>
#define p printf
#define s scanf
int main(){
	int i,n;
	char name[20][30],temp[20];
	p("Enter n name of Students: "); s("%d",&n);
	for(i=0;i<n;i++){
		p("Input name: "); fflush(stdin); gets(name[i]);
	}
	p("\n==> Output Before Sort: <==\n");
	for(i=0;i<n;i++)
		p("Name: %s\n",name[i]);
	//sort
	for(i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(strcmpi(name[i],name[j])>0){
				strcpy(name[i],temp);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
	p("\n==> Output After Sort: <==\n");
	for(i=0;i<n;i++)
	p("Name : %s\n",name[i]);
}
