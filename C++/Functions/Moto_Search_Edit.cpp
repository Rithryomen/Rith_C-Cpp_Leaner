#include<iostream>
#include<string.h>
using namespace std;
class Moto{
	private:
		char model[30];
		char color[30];
		float price;
		int year;
	public:
		char *get_Model(){
			return model;
		}
		char *get_Color(){
			return color;
		}
		float get_Price(){
			return price;
		}
		int get_Year(){
			return year;
		}
		void input_Data(){
			cout<<"Enter Moto Model:"; cin.seekg(0); cin.get(model,30);
			cout<<"Enter Moto Color:"; cin.seekg(0); cin.get(color,30);
			cout<<"Enter Year:"; cin>>year;
			cout<<"Enter Price:"; cin>>price;
		}
		void output_Data(){
			cout<<"Model:"<<model<<endl;
			cout<<"Color:"<<color<<endl;
			cout<<"Year:"<<year<<'\t'<<"Price($):"<<price<<endl;
		}
		void edit_Data() {
			cout << "\n===>> Editing Moto Data <<===\n";
			cout << "Current Model: " << model << "\n";
			cout << "Enter New Model: "; cin.seekg(0); cin.get(model, 30);
		}
};//ended Class
void search_Model(Moto m[],int n){
	char sm[30];
	int k=0;
	cout<<"Enter Model To Search:"; cin.seekg(0); cin.get(sm,30);
	for(int i=0;i<n;i++)
		if(strcmpi(m[i].get_Model(),sm)==0){
			k=k+1;
			m[i].output_Data();
			char ed;
			cout << "Do you want to edit the moto? (y/n): "; cin>>ed;
			if (ed == 'y') {
			m[i].edit_Data();
			}
		}
		if(k==0){
			cout<<"Search Not Found!";
		}
}
int main(){
	Moto m[20];
	int n,i;
	cout<<"Enter n Motorcycle:"; cin>>n;
	for(i=0;i<n;i++){
		m[i].input_Data();
	}
	cout<<"\n====> Output Befor Search: <<<<<<<<<<<"<<endl;
	for(i=0;i<n;i++){
		m[i].output_Data();
	}
	search_Model(m,n);
	cout<<"\n====> Output After Searched: <<<<<<<<<<<"<<endl;
	for(i=0;i<n;i++){
		m[i].output_Data();
	}
}
