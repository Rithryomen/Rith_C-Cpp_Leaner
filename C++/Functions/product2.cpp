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
		float totalall();
};
void Product::input_Data(){
	cout<<"Input ID:"; cin.seekg(0); cin.get(id,10);
	cout<<"Enter Product Name:"; cin.seekg(0); cin.get(name,40);
	cout<<"Enter Quantity:"; cin>>qty;
	cout<<"Enter Price="; cin>>price;
}
float Product::total(){
    return price * qty;
}
float Product::discount(){
    if(qty >= 100)
        return total()*0.15;  // 15% discount
    else
        return total()*0.05;  // 5% discount
}
float Product::totalall(){
	return total()-discount();
}
void Product::output_Data(){
	cout<<"Product ID:"<<id<<'\t'<<"Name:"<<name<<'\t'<<"Quantity="<<qty<<'\t'<<"Price:"<<price<<'\t'<<"Total b4 dis="<<total()<<'\t'<<"Discount="<<discount()<<'\t'<<"Total After Discount="<<totalall()<<endl;
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
