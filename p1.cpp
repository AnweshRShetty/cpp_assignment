// P1. Define a Person class like we did in the previous module. Only add name and age.


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

int main(){
  Person p1("Ronaldo",07);
  p1.print_info();
  return 0;
}
