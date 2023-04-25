#include <iostream>
using namespace std;

class Counter {
    private:
        int count;
    public:
        Counter() {
            count = 5;
        }
        
        void operator++ () {
            count++;
        }
        
        void operator-- () {
            count--;
        }
        
        void display() {
            cout << "Count: " << count << endl;
        }
};

int main() {
    Counter E1;
    E1.display();   
    ++E1;           
    E1.display();   
    --E1;           
    E1.display();   
    
	
	return 0;
    
}





//#include<iostream>
//#include<string.h>
//using namespace std;
//class ClassUser{
//	private:
//		int a;
//	public:
//		void set(int a1){
//			a=a1;
//		}
//		void get(){
//		 cout<<a<<endl;
//		}
//	ClassUser operator ++ (){
//		ClassUser ans;
//		 ans.a=++a;
//		 return ans;
//	}
//};
//class ClassBeer{
//	private:
//		int b;
//	public:
//		void set(int b1){
//			b=b1;
//		}
//		void get(){
//		 cout<<b<<endl;
//		}
//			
//	ClassBeer operator -- (){
//		ClassBeer asn;
//		 asn.b=--b;
//		 return asn;
//	}
//};
//int main(){
//	ClassUser obj1,obj2;
//	cout<<"Increment"<<endl;
//	obj1.set(50);
//	obj1.get();
//	obj2 = ++obj1;
//	obj2.get();
//	cout<<endl;
//	
//	ClassBeer ob1,ob2;
//	cout<<"Decrement"<<endl;
//	ob1.set(64);
//	ob1.get();
//	ob2 = --ob1;
//	ob2.get();
//	
//	return 0;
//
//}

