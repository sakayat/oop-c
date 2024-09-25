#include <iostream>
using namespace std;

class A {
  public:
  
  int display(){
    cout << "I am method" << endl;
  }
  
};

int main() 
{
    A obj;
    
    obj.display();
    
    return 0;
}