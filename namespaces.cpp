// Namespace = provides a solution for preventing name conflicts 
//             in large projects. Each identiy has to require a   
//              unique name as long the namespace is different the 
//              different the outcome

#include <iostream>

namespace first {
     int x = 1;
}
namespace second {
     int x = 2;   
 
}

namespace third {
    int x = 3;
}


int main() {


    int x = 0;

    std::cout << first::x;

    return 0;

}