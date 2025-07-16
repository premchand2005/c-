#include<iostream>
using namespace std;
class dad{
	protected:
		int amount;
		public:
			void input(){
				amount=10000;
			}
};
class son: public dad{
	int money;
	public:
		void show(){
			money=22321;
			cout<<"son money"<<money<<endl;
			cout<<"dad money"<<amount;
		}
};
int main(){
	son s;
	s.input();
	s.show();
	return 0;
}
