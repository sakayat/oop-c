#include <iostream>
using namespace std;

class A {  
  public:
  
  int value;
  
  A(){
   value = 34;
  }
  
  void display(){
    cout << value << endl;
  }
  
};

int main() 
{
    A obj;
    
    obj.display();
    
    return 0;
}