#include <iostream>
class Myclass{
public:
    static int instanceCount;

    Myclass(){
    instanceCount++;
    }

    static int getCount(){

    return instanceCount;

    }

};
int Myclass::instanceCount=0;

int main() {
   Myclass obj1;
   Myclass obj2;

   int count = Myclass::getCount();
   std::cout<<"Number of instances: "<<count<<std::endl;

    return 0;
}

