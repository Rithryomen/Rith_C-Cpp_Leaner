#include<iostream>
#include<string.h>
using namespace std;
class Moto{
	private:
		char brand[30];
		char model[40];
		int year;
	public:
	Moto(){ //Default Constructor
		strcpy(brand,"Kawasaki");
		strcpy(model,"Z900");
		year=2025;
	}
	void show_Data(){
		cout<<"Brand:"<<brand<<endl;
		cout<<"Model:"<<model<<endl;
		cout<<"Year:"<<year;
	}
};
int main(){
	system("color 80");
	Moto m;
	m.show_Data();
}
