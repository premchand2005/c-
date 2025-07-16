#include<iostream>
int a,b,c;
using namespace std;
class A{
	public:
		void input();
		void add();
};
void A :: input(){
	cout<<"Enter two number:";
	cin>>a>>b;
}
void A :: add(){
	c=a+b;
	cout<<"addition"<<c;
}
class B{
	public:
		void sub();
};
void B :: sub(){
	c=a-b;
	cout<<"substraction"<<c;
}
class c: public A , public B{
	public:
	void multi();
	void div();
};
void c::multi(){
	c=a*b;
	cout<<"multiplication"<<c;
}
void c::div(){
	c=a/b;
	cout<<"division"<<c;
}
int main(){
	c obj;
	obj.input();
	obj.add();
	obj.sub();
	obj.multi();
	obj.div();
	return 0;
}

