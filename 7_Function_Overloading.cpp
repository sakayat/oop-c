#include <iostream>
using namespace std;


int add(int a, int b) {
    return a + b;
}


int add(int a, int b, int c) {
    return a + b + c;
}


double add(double a, double b) {
    return a + b;
}

int main() {

    cout << "Sum of 2 integers: " << add(5, 10) << endl;
    cout << "Sum of 3 integers: " << add(5, 10, 15) << endl;
    cout << "Sum of 2 doubles: " << add(2.5, 3.7) << endl;

    return 0;
}