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
	cout<<"addition"<<c<<endl;
}
class B{
	public:
		void sub();
};
void B :: sub(){
	c=a-b;
	cout<<"substraction"<<c<<endl;
}
class C: public A , public B{
	public:
	void multi();
	void div();
};
void C::multi(){
	c=a*b;
	cout<<"multiplication"<<c<<endl;
}
void C::div(){
	c=a/b;
	cout<<"division"<<c;
}
int main(){
	C obj;
	obj.input();
	obj.add();
	obj.sub();
	obj.multi();
	obj.div();
	return 0;
}

