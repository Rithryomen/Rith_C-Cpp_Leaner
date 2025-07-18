#include<iostream>
using namespace std;
class Phone{
	private:
		char brand[40];
		char model[40];
		char chip[50];
		int year;
		int screen;
		float price,dis;
	public:
		void input_Data();
		void output_Data();
		void total_Dis();
};
void Phone::input_Data(){
	cout<<"Enter Brand Phone: "; cin.seekg(0); cin.get(brand,40);
	cout<<"Enter Model: "; cin.seekg(0); cin.get(model,40);
	cout<<"Enter Refresh Rate(Hz): "; cin>>screen;
	cout<<"Enter Chipset: "; cin.seekg(0); cin.get(chip,50);
	cout<<"Enter Year Invented: "; cin>>year;
	cout<<"Enter Price:"; cin>>price;
}
void Phone::output_Data(){
	cout<<"Brand: "<<brand<<endl;
	cout<<"Model: "<<model<<endl;
	cout<<"Refresh Rate: "<<screen<<endl;
	cout<<"Chipset: "<<chip<<endl;
	cout<<"Year: "<<year<<endl;
	cout<<"Price: "<<price<<endl;
	cout<<"After Discount: "<<dis<<endl;
}
void Phone::total_Dis(){
	dis=price-(price*10)/100;
}
int main(){
	Phone p;
	p.input_Data();
	p.total_Dis();
	cout<<"\n-=-> Output-Phone-Result <-=-"<<endl;
	p.output_Data();
}
