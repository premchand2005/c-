#include<iostream>
using namespace std;
int main(){
	int n,r,a=0;
	cout<<"enter any nuber...";
	cin>>n;
	while(n!=0){
		r=n%10;
		a=a*10+r;
		n=n/10;
}
cout<<"reversed number"<<a;
		return 0;

}
