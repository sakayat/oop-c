#include <bits/stdc++.h>
using namespace std;

class Person {
  
  public:
  
  string name;
  int age;
  
  Person(string name, int age){
    this->name = name;
    this->age = age;
  }
  
  void personal_info(){
    cout << this->name << " - " << this->age << endl;
  }
};

class Company{
  
  public:
  
  string company_name;
  string company_location;
  
  
  
  Company(string company_name, string company_location){
    this->company_name = company_name;
    this->company_location = company_location;
  }
  
  void company_info(){
    cout << company_name << " - " << company_location << endl;
  }
};

class Employee : public Person, public Company  {
  
  public:
  
  string position;
  
  Employee(
  string name, 
  int age,
  string company_name, 
  string company_location, 
  string position
  ) 
  : Person(name, age), 
  Company(company_name, company_location)
  {
    this->position = position;
  }
  
  void employee_info(){
    personal_info();
    company_info();
    cout << position << endl;
  }
  
};

int main() {
  
    Employee emp_obj("Samia", 24, "TechCorp", "New York", "Software Developer");
    
    emp_obj.employee_info();

    return 0;
}