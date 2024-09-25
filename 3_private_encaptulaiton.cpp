#include <bits/stdc++.h>

using namespace std;

class A {
private:
    int value;

public:
    A() {
      value = 45;
    }

    void setValue(int newValue){
      this->value = newValue;
    }
    
    void getValue(){
      cout << value << endl;
    }
    
    void display() {
        cout << value << endl;
    }
};

int main() {
    A obj;
    
    obj.setValue(40);
    
    obj.display();
    
    obj.getValue();

    return 0;
}