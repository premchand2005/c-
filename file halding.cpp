#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream newfile("C:\\Users\\hp\\destop\\cpp.text");
	cout<<"file created";
	newfile.close();
	return 0;
}
