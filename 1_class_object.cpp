#include <iostream>
using namespace std;

class A {
  public:
  int value;
  
  A(){
    cout << "I am Constructor" << endl;
  }
  
  int display(){
    cout << "I am method" << endl;
  }
  
  ~A(){
    cout << "I am destructor" << endl;
  }
};


int main() 
{
    A obj;
    
    obj.value = 50;
    
    cout << obj.value << endl;
    
    return 0;
}