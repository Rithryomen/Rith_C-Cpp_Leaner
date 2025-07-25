#include<iostream>
using namespace std;
class Bank{
	private:
		static float interestRate;
	public:
		static void setRate(float r){
			interestRate=r;
		}
		static float getRate(){
			return interestRate;
		}
};
float Bank::interestRate=4.5;
int main(){
	cout<<"Old Interest Rate:"<<Bank::getRate()<<endl;
	Bank::setRate(6);
	cout<<"New Interest Rate:"<<Bank::getRate()<<endl;
}
