#include <iostream>
#include <string>

using namespace std;

class A {
public:
    string name;

    A() {}

    void display() {
        cout << "Name in class A: " << name << endl;
    }
};

class B : public A {
public:
    int age;
    B() {}

    void display() {
        A::display();
        cout << "Age in class B: " << age << endl;
    }
};

int main() {
  
    B obj;

    obj.name = "Sairi";
    obj.age = 25;
    obj.display();

    return 0;
}