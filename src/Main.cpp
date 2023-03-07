#include <iostream>

#include <MyClass.hpp>

int main(void) {
    MyClass myClass{};
    std::cout << "Hello World : " << myClass.Sum(1, 2) << "\n";
    return 0;
}
