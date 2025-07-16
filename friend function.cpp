#include<iostream>
using namespace std;
class premchand{
	private:
		string tv;
		public:
			void show(){
				tv="IPL final 2024";
			}
			friend void rohit(premchand r);
};
void rohit(premchand r){
	cout<<"t am rohit now i wathching "<<r.tv;
	
}
int main(){
	premchand a;
	a.show();
	rohit(a);
	return 0;
}
