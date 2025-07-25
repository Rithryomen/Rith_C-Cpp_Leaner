#include<iostream>
#include<string.h>
using namespace std;
class Student{
	private:
		char id[10];
		char name[50];
		char sex;
		int age;
		float score;
	public:
		static void header(){
			cout<<"ID \t Name \t Sex \t Age \t Score";
		}
		Student(){
			strcpy(id,"A01");
			strcpy(name,"Rith_Ryomen");
			sex='M';
			age=17;
			score=99.50;
		}
		Student(char *i,char *n,char s,int a,float score){
			strcpy(id,i);
			strcpy(name,n);
			sex=s;
			age=a;
			this->score=score;
		}
		void input_Data(){
			cout<<"Enter ID:"; cin.seekg(0); cin.get(id,10);
			cout<<"Enter Name:"; cin.seekg(0); cin.get(name,50);
			cout<<"Enter Sex:"; cin>>sex;
			cout<<"Enter Age:"; cin>>age;
			cout<<"Enter Score:"; cin>>score;
		}
		void output_Data(){
			cout<<'\n'<<id<<'\t'<<name<<'\t'<<sex<<'\t'<<age<<'\t'<<score<<endl;
		}
};
int main(){
	system("color 80");
	Student st[3];
	int i,n;
	for(i=0;i<3;i++)
		st[i].output_Data();
		
		cout<<"Enter n Student:"; cin>>n;
	for(i=0;i<n;i++){
		st[i].input_Data();
	}
	Student::header();
	for(i=0;i<n;i++){
		st[i].output_Data();
	}
}
