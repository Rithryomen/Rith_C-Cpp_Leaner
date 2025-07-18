#include<iostream>
using namespace std;

float average(float m,float k,float e,float f,float c,float ph,float py){
	return(m+k+e+f+c+ph+py)/7;
}
char grade(float avg){
	char g;
	if(avg>=95)
		g='A';
	else if (avg>=85)
		g='B';
	else if (avg>=75)
		g='C';
	else if (avg>=65)
		g='D';
	else if (avg>=50)
		g='E';
	else
		g='F';
	return g;
}
int main(){
	float math,khmer,eng,funda,code,philo,phys,avg;
	char gr;
	cout<<"Enter Math: "; cin>>math;
	cout<<"Enter Khmer: "; cin>>khmer;
	cout<<"Enter English: "; cin>>eng;
	cout<<"Enter Fundamental: "; cin>>funda;
	cout<<"Enter Code: "; cin>>code;
	cout<<"Enter Philosophy: "; cin>>philo;
	cout<<"Enter Physic: "; cin>>phys;
	avg=average(math,khmer,eng,funda,code,philo,phys);
	gr=grade(avg);
	
	cout<<"Your Score is:"<<avg<<endl;
	cout<<"Your Grade: "<<gr<<endl;
	return 0;
}
