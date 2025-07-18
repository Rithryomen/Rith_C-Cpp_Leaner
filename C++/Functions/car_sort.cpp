#include<iostream>
#include<string.h>
using namespace std;
class Car{
	private:
		char brand[40];
		char model[30];
		int year;
	public:
		int get_Year(){
			return year;
		}
		void input_Data(){
			cout<<"Enter Brand Name:"; cin.seekg(0); cin.get(brand,40);
			cout<<"Enter Car Model:"; cin.seekg(0); cin.get(model,30);
			cout<<"Enter Year:"; cin>>year;
		}
		void show_Data(){
			cout<<"Brand:"<<brand<<endl;
			cout<<"Model:"<<model<<endl;
			cout<<"Year:"<<year<<'\n'<<endl;
		}
}; //end class
void sort_Year(Car c[],int n){
	Car temp;
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(c[i].get_Year()>c[j].get_Year()){
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
}
int main(){
	Car c[20];
	int n,i;
	cout<<"Enter Elements Of Car:"; cin>>n;
	for(i=0;i<n;i++){
		c[i].input_Data();
	}
	cout<<"\n====>> Output Before Sort:<<====\n";
	for(i=0;i<n;i++){
		c[i].show_Data();
	}
	sort_Year(c,n);
	cout<<"\n====>> Output After Sorted: <<====\n";
	for(i=0;i<n;i++){
		c[i].show_Data();
	}
}
