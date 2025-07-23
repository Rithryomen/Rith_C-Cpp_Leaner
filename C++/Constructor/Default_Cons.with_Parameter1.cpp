#include<iostream>
#include<string.h>
using namespace std;
class Car{
	private:
		char brand[50];
		char model[50];
		int year;
		float price;
	public:
		Car(char *b,char *m,int y,float p){
			strcpy(brand,b);
			strcpy(model,m);
			year=y;
			price=p;
		}
		Car(){
			strcpy(brand,"Ferrari");
			strcpy(model,"SF90");
			year=2025;
			price=699000.99;
		}
		void show(){
			cout<<"Car Brand:"<<brand<<endl;
			cout<<"Model:"<<model<<endl;
			cout<<"Year:"<<year<<'\t'<<"Price(USD):"<<price;
		}
};
int main(){
	system("color 0C");
	Car c1("Lamboghini","Huracan STO",2024,340000.99); //cons.with para.
	cout<<"Constructor With Parameter:\n";
	c1.show();
	
	Car c2;
	cout<<"\nDefaul Constructor:\n";
	c2.show();
}
