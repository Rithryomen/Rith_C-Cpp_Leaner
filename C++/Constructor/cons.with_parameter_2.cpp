#include<iostream>
#include<string.h>
using namespace std;
class Student{
	private:
		int id,age;
		char name[50];
		char sex;
		float math,eng,kh,fun,phy,psy,cpp;
		float avg;
	public:
		Student(int i,int age,char *n,char s,float m,float e,float k,float f,float p,float ps,float c){
			id=i;
			this->age=age;
			strcpy(name,n);
			sex=s;
			math=m;
			eng=e;
			kh=k;
			fun=f;
			phy=p;
			psy=ps;
			cpp=c;
			this->avg=(m+e+k+f+p+ps+c)/7;
		}
		void show_Data(){
			cout<<"ID:"<<id<<endl;
			cout<<"Name:"<<name<<'\t'<<"Sex:"<<sex<<'\t'<<"Age:"<<age<<endl;
			cout<<"Average:"<<avg;
		}
};
int main(){
	system("color 80");
	Student s(1,17,"Rith_Tenjou",'M',50.00,60.00,70.00,80.00,90.00,85.00,95.00);
	s.show_Data();
}
