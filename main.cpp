#include <iostream>
#include "Person.h"

int main() {
    Person p("John", 30);

    std::cout << "Name: " << p.getName() << std::endl;
    std::cout << "Age: " << p.getAge() << std::endl;

    p.setName("Jane");
    p.setAge(25);

    std::cout << "Name: " << p.getName() << std::endl;
    std::cout << "Age: " << p.getAge() << std::endl;

    return 0;
