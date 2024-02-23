#include "Person.h"

Person::Person(const std::string& name, const int age) {
    name_ = name;
    age_ = age;
}

std::string Person::getName() const {
    return name_;
}

int Person::getAge() const {
    return age_;
}

void Person::setName(const std::string& name) {
    name_ = name;
}

void Person::setAge(const int age) {
    age_ = age;
