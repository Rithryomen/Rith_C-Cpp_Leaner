#include<iostream>
#include<string.h>
using namespace std;
class Phone{
	private:
		char brand[30];
		char model[44];
		float price;
	public:
	Phone(char *b,char *m,float price){ //cons. with para.
		strcpy(brand,b);
		strcpy(model,m);
		this->price=price;
	}
	phone(const Phone&obj){ //copy cons.
		strcpy(brand,obj.brand);
		strcpy(model,obj.model);
		price=obj.price;
	}
	void show_Data(){
		cout<<"Phone Brand:"<<brand<<endl;
		cout<<"Model:"<<model<<endl;
		cout<<"Price:"<<price;
	}
};
int main(){
	system("color 7D");
	Phone p1("IPhone","SE 3 Gen",500);
	Phone p2=p1;
	p2.show_Data();
}
