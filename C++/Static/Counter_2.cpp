#include<iostream>
using namespace std;
class Counter{
	public:
		static int count;
		Counter(){
			count++;
		}
};
int Counter::count=20;
int main(){
	Counter c1,c2,c3;
	cout<<"Counter Created:"<<Counter::count<<endl;
}
