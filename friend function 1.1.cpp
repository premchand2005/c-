#include<iostream>
using namespace std;
class premchand;
	class rohit{
		private:
			int a;
			public:
				void ihave(){
					a=10;
				}
				friend void ankush(rohit p, premchand p2);
	};
	class premchand{
	private:
		int b;
		public:
			void ihave(){
				b=10;
			}
			friend void ankush(rohit p, premchand p2);
		};
		void ankush(rohit p, premchand p2){
		
				int c;
				c=p.a + p2.b;
				cout<<c;
			}
			int main(){
				rohit a;
				a.ihave();
				premchand a2;
				a2.ihave();
				ankush(a,a2);
				return 0;
			}
	
