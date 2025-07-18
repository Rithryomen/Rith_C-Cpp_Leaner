#include<iostream>
using namespace std;
int main(){
	int id;
	char name[30],sex,nick[30];
	float avg;
	
	cout<<"Enter ID:"; cin>>id;
	cout<<"Enter Name:"; cin.seekg(0); cin.get(name,30);
	cout<<"Enter Nickname:"; cin.seekg(0); cin.get(nick,30);
	cout<<"Sex:"; cin>>sex;
	cout<<"Enter Average:"; cin>>avg;
	cout<<"\n==>Output Data<==\n";
	cout<<id<<'\n'<<name<<'\n'<<nick<<'\n'<<sex<<'\n'<<avg;
}
