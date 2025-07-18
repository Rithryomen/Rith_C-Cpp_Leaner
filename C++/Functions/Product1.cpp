#include<iostream>
using namespace std;
class Product{
	private:
		char id[10];
		char name[40];
		int qty;
		float price;
	public:
		void input_Data();
		void output_Data();
		float discount();
		float total();
};
void Product::input_Data(){
	cout<<"Input ID:"; cin.seekg(0); cin.get(id,10);
	cout<<"Enter Product Name:"; cin.seekg(0); cin.get(name,40);
	cout<<"Enter Quantity:"; cin>>qty;
	cout<<"Enter Price="; cin>>price;
}
float Product::discount(){
	float dis;
	if(qty>=100)
		return dis=price*0.15;
	else
		return dis=price*0.05;
}
float Product::total(){
	return qty * (price - discount());
}
void Product::output_Data(){
	cout<<"Product ID:"<<id<<'\t'<<"Name:"<<name<<'\t'<<"Quantity="<<qty<<'\t'<<"Price:"<<price<<'\t'<<"Discount per item="<<discount()<<'\t'<<"Total="<<total()<<endl;
}
int main(){
	Product p[10];
	int n,i;
	cout<<"Enter Elements Of Product:"; cin>>n;
	for(i=0;i<n;i++){
		p[i].input_Data();
	}
	cout<<"\n----->> Output Product Data <-----"<<endl;
	for(i=0;i<n;i++)
		p[i].output_Data();
}
