
#include <iostream>
using namespace std;
struct Person{
  string name;
  int age;
};

int main() {
     Person person1;
     person1.name="Jara";
     person1.age=30;

     Person* personPtr;

     personPtr = &person1;

     cout<<"Name: "<< personPtr ->name <<endl;
     cout<<"Age: "<< personPtr ->age <<endl;
    return 0;
}
