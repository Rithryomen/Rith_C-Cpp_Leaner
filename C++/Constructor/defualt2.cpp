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
		Student(){
			id=001;
			strcpy(name,"Rith_Ryomen");
			sex='M';
			age=17;
			math=50;
			eng=60;
			kh=70;
			fun=80;
			phy=90;
			psy=85;
			cpp=95;
			avg=(math+eng+kh+fun+phy+psy+cpp)/7;
		}
		void show(){
			cout<<"ID:"<<id<<endl;
			cout<<"Name:"<<name<<'\t'<<"Sex:"<<sex<<'\t'<<"Age:"<<age<<endl;
			cout<<"Average:"<<avg;
		}
};
int main(){
	system("color 90");
	Student ss;
	ss.show();
}
