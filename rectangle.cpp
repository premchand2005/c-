#include<iostream>
using namespace std;
class A{
	int l,b,area;
	public:
		void rectangle(){
			cout<<"Enter lenght and breath of rectangle";
			cin>>l>>b;
			area=l*b;
			cout<<"area of rectangle is:"<<area;
			
		}
};
int main(){
	A obj;
	obj.rectangle();
	return 0;
}
