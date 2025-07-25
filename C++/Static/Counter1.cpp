#include<iostream>
using namespace std;
class Counter{
	static int count;
	public:
		Counter(){
			count++;
		}
		static void show_Counter(){
			cout<<"Objects Count:"<<count<<endl;
		}
};
int Counter::count=20;
int main(){
	Counter a;
	Counter::show_Counter();
	Counter b;
	Counter::show_Counter();
	Counter c;
	Counter::show_Counter();
	/* or
	Counter a,b,c,d;
	Counter::show_Counter();*/
}
