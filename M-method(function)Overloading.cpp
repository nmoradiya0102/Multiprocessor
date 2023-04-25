#include <iostream>
using namespace std;

class Illustrate {
   public:
    void out() {
        cout << "Illustrate Function" << endl;
    }
};

class Overriding : public Illustrate  {
   public:
    void out() {
        cout << "Overriding Function" << endl;
    }
};

 int main() {
    Overriding overriding1;
    overriding1.out();
    
    return 0;
}



//#include<iostream>
//#include<string.h>
//using namespace std;
//class classA{
//	public:
//		void get(int a){
//			cout<<"class A : "<<a<<endl;
//		}
//};
//class classB : public classA{
//	public:
//		void get(int b){
//			cout<<"class B : "<<b<<endl;
//		}
//};
//int main(){
//	classB obj;
//	obj.classA::get(526);
//	obj.get(9586);
//	return 0;
//}

