#include <iostream>

class Person{
public:
    int age;
    Person(int initialAge);
    void amIOld();
    void yearPasses();
};

Person::Person(int initialAge){
    if(initialAge < 0){
        this->age = 0;
        std::cout << "Age is not valid, setting age to 0." <<  std::endl;
    }
    else {
        this->age = initialAge;
    }
}

void Person::amIOld(){
    if(age < 13)
        std::cout << "You are young." <<  std::endl;
    else if(age < 18)
        std::cout << "You are a teenager." <<  std::endl;
    else
        std::cout << "You are old." <<  std::endl;
}

void Person::yearPasses(){
    age++;
}

int main(){
    int age;
    std::cin >> age;
    Person p(age);
    p.amIOld();
    
    for(int j=0; j < 3; j++) {
        p.yearPasses();
    }
    
    p.amIOld();

    std::cout << std::endl;

    return 0;
}