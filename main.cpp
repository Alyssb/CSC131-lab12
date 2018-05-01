#include <iostream>
#include "Box.h"

int main()
{
    std::cout << "Hello, World!" << std::endl;
    Box box1{};
    std::cout << "box1.getVol() = " << box1.getVol() << std::endl;
    Box box2{1, 2, 3};
    std::cout << "box2.getVol() = " << box2.getVol() << std::endl;
    std::cout << "box1 < box2?? " << (box1 < box2 ? "Yes" : "No") << std::endl;

    Box box3{};
    std::cout << "box1 = box2?? " << (box1 == box3 ? "Yes" : "No") << std::endl;

    return 0;
}