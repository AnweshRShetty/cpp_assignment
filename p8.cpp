// P8. Create an instance of Student and call print_info() on it.

#include <iostream>
using namespace std;

class Person {
    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }
        void print_info() {
            cout << "My name is: " << name << " my age is: " << age << endl;
        }
    private:
        string name;
        int age;
};

class Student : public Person{
  public:
    Student(string name, int age , string branch): Person(name,age){
      this->branch = branch;
    }
    void print_info() {
      Person::print_info();
      cout << "Branch is: "<< branch <<endl;
    }
  private:
    string branch;
};

int main(){
  Person p1("Messi",23);
  Person p2("Ronaldo",37);
  p1.print_info();
  p2.print_info();
  
  Student s1("Kohli",09,"EEE");
  s1.print_info();
  return 0;
}
