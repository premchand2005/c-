#include<iostream>
using namespace std;
class A{
	private:
	int n,c,r,a;
	public:
		void setdata(){
			cout<<"Enter any number:";
			cin>>n;
		}
		void getdata(){
			c=n;
			a=0;
			while(n>0){ 
				r=n%10; 
				a=(r*r*r)+a;
				n=n/10;
			}
			if(c==a)
			cout<<"armstrong number";
			else
			cout<<"not armstrong number";
			
		}
};
int main(){
	A obj;
	obj.setdata();
	obj.getdata();
	return 0;
}

