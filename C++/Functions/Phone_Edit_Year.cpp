#include<iostream>
#include<string.h>
using namespace std;
class Phone{
	private:
		char brand[30];
		char model[40];
		int year;
		float price;
	public:
		char *get_Brand(){
			return brand;
		}
		char *get_Model(){
			return model;
		}
		int get_Year(){
			return year;
		}
		float get_Price(){
			return price;
		}
		void set_Year(int y){
			year=y;
		}
		void input_Data(){
			cout<<"Enter Brand Name:"; cin.seekg(0); cin.get(brand,30);
			cout<<"Enter Model:"; cin.seekg(0); cin.get(model,40);
			cout<<"Enter Year:"; cin>>year;
			cout<<"Enter Price:"; cin>>price;
		}
		void output_Data(){
			cout<<"Brand:"<<brand<<'\t'<<"Model:"<<model<<endl;
			cout<<"Year: "<<year<<'\t'<<"Price:"<<price<<endl;
		}
};
void edit_Year(Phone p[], int n) {
	int syear, newy;
	int k=0;
	cout << "Enter the Year to Search for Editing: "; cin>>syear;
	for (int i = 0; i < n; i++) {
		if (p[i].get_Year() == syear){
			k=k+1;
			p[i].output_Data();
			cout << "\nEnter New Year:"; cin>>newy;
			p[i].set_Year(newy);
		}
	}
	if (k==0) {
		cout << "No phone found with the year!" <<syear<<endl;
	}
}
int main(){
	Phone p[20];
	int n,i;
	system("color 9");
	cout<<"Enter n Phone To Input Detail: "; cin>>n;
	for(i=0;i<n;i++){
		p[i].input_Data();
	}
	cout<<"\n====>> Output Before Edit: <<===="<<endl;
	for(i=0;i<n;i++){
		p[i].output_Data();
	}
	cout<<"\n---------------------------\n";
	edit_Year(p,n);
	cout<<"\n<<<=== Output After Edited: --->>>"<<endl;
	for(i=0;i<n;i++){
		p[i].output_Data();
	}
}
