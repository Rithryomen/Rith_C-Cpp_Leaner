#include<iostream>
using namespace std;
class Student{
	private:
		int id,age;
		char name[40];
		char sex[10];
		float kh,m,eng;
	public:
		void input_Data();
		void output_Data();
		float avg();
		char g();
};
void Student::input_Data(){
	cout<<"Enter ID:"; cin>>id;
	cout<<"Enter Name:"; cin.seekg(0); cin.get(name,40);
	cout<<"Enter Sex:"; cin.seekg(0); cin.get(sex,10);
	cout<<"Enter Khmer="; cin>>kh;
	cout<<"Enter Math="; cin>>m;
	cout<<"Enter English="; cin>>eng;
}
float Student::avg(){
	return (kh+m+eng)/3;
}
char Student::g(){
	float average=avg();
	if(average>=95)
		return 'A';
	else if(average>=85)
		return 'B';
	else if(average>=75)
		return 'C';
	else if(average>=65)
		return 'D';
	else if(average>=50)
		return 'E';
	else
		return 'F';
}
void Student::output_Data(){
	cout<<"ID:"<<id<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Age:"<<age<<endl;
	cout<<"Gender:"<<sex<<endl;
	cout<<"Avg="<<avg()<<endl;
	cout<<"Grade:"<<g()<<endl;
}
int main(){
	Student s[20];
	int i,n;
	cout<<"Enter Number Of Student:"; cin>>n;
	for(i=0;i<n;i++){
		s[i].input_Data();
	}
	cout<<"\n====> Output <====\n";
	for(i=0;i<n;i++)
		s[i].output_Data();
}
