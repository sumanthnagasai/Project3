#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
    Person(const std::string& name, const int age);

    std::string getName() const;
    int getAge() const;
    void setName(const std::string& name);
    void setAge(const int age);

private:
    std::string name_;
    int age_;
};

#endif