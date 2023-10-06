#include <iostream>

namespace first{
 int x=10;

}

namespace second{
   int x=20;

}
int main()
{
    std::cout<<first::x<< std::endl;
    std::cout<<second::x<< std::endl;
    return 0;
}
