#include<iostream>
#include<string.h>
using namespace std;
class Moto{
	private:
		char brand[30];
		char model[50];
		int year;
	public:
	Moto(char *b,char *m,int year){ //Constructor With Parameter
		strcpy(brand,b);
		strcpy(model,m);
		this->year=year; //or year=y;
	}
	void show_Data(){
		cout<<"Brand Of Moto:"<<brand<<endl;
		cout<<"Model:"<<model<<endl;
		cout<<"Year:"<<year;
	}
};
int main(){
	system("color 30");
	Moto m("Honda","Beat",2019);
	m.show_Data();
}
