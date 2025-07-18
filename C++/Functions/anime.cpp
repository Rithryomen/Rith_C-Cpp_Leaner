#include<iostream>
using namespace std;
class Anime{
	private:
		char title[50];
		char name[40];
		char gen[10];
		int age;
	public:
		void input_Data();
		void output_Data();
};
void Anime::input_Data(){
	cout<<"Enter Anime Title:"; cin.seekg(0); cin.get(title,50);
	cout<<"Enter Character:"; cin.seekg(0); cin.get(name,40);
	cout<<"Enter Character Gender:"; cin.seekg(0); cin.get(gen,10);
	cout<<"Enter Character Age:"; cin>>age;
}
void Anime::output_Data(){
	cout<<"A.Title: "<<title<<endl;
	cout<<"Character: "<<name<<endl;
	cout<<"Gender: "<<gen<<endl;
	cout<<"Age: "<<age<<endl;
}
int main(){
	Anime a;
	a.input_Data();
	cout<<"\n==> Output--Ouput <=="<<endl;
	a.output_Data();
}
