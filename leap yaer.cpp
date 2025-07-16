#include<istream>
using namespace std;
class leapyear{
	int y;
	public:
		void leapyear(){
			cout<<"enter year";
			cin>>y;
			if(y%400==0 && y%100==0 || y%4==0 && y%100!=0)
				cout<<"leap year";
				
			
			else{
				cout<<"not leap year";
			}
			};
			int main(){
				leap obj;
				obj. leapyear();
			}
			return 0;
		}

	
	
