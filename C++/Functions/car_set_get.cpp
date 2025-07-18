#include<iostream>
#include<string.h>
using namespace std;
class Car{
	private:
		char brand[40];
		char color[12];
		int year;
	public:
	//getter function
	char *get_Brand(){
		return brand;
	}
	char *get_color(){
		return color;
	}
	int get_Year(){
		return year;
	}
	//setter function
	void set_Brand(char *b){
		strcpy(brand,b);
	}
	void set_Color(char *c){
		strcpy(color,c);
	}
	void set_Year(int y){
		year=y;
	}
	void show_Data(){
		cout<<"Brand:"<<brand<<endl;
		cout<<"Color:"<<get_color()<<endl;
		cout<<"Year:"<<year<<endl;
	}
};
int main(){
	Car car;
	car.set_Brand("Supra MK5");
	car.set_Color("Green");
	car.set_Year(2025);
	car.show_Data();
	car.set_Color("Yellow");
	car.set_Brand("Lamboghini Urus");
	cout<<"\n====>> Output <<====\n";
	car.show_Data();
}
