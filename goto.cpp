#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age";
	cin>>age;
	if(age>=18)
	goto vote;
	else
	goto novote;
	vote:
		cout<<"eligible for vote......";
		return 0;
		novote:
			cout<<"not eligible for vote......";
			return 0;
}
