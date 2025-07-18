#include<iostream>
using namespace std;
class Student{
	private:
		int id,age;
		char name[30];
		char gen[10];
		float math,kh,eng;
	public:
		void input_Data(){
			cout<<"Enter Id:"; cin>>id;
			cout<<"Enter Name:"; cin.seekg(0); cin.get(name,30);
			cout<<"Enter Gender:"; cin.seekg(0); cin.get(gen,10);
			cout<<"Enter Age:"; cin>>age;
			cout<<"Enter Math="; cin>>math;
			cout<<"Enter Khmer="; cin>>kh;
			cout<<"Enter English="; cin>>eng;
		}
		void output_Data(){
			cout<<"ID: "<<id<<'\n'<<"Name: "<<name<<'\n'<<"Gender: "<<gen<<'\n'<<"Age: "<<age<<'\n'<<"Avg: "<<avg()<<'\n'<<"Grade: "<<g()<<endl;
		}
		float avg(){
			return (math+kh+eng)/3;
		}
		char g(){
			
    		float average = avg(); // call the avg() function
    		if (average >= 95)
     		return 'A';
   		else if (average >= 85)
    			return 'B';
    		else if (average >= 75)
     		return 'C';
     	else if (average >= 65)
     		return 'D';
     	else if (average >= 50)
     		return 'E';
     	else
     		return 'F';
	}
};
int main(){
	Student st[10];
	int n,i;
	cout<<"Enter n Objects: "; cin>>n;
	for(i=0;i<n;i++){
		st[i].input_Data();
	}
	cout<<"\n=--=> Output Students Data <=--=\n";
	for(i=0;i<n;i++){
		st[i].output_Data();
	}
}
