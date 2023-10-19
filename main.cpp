#include <iostream>
#include <vector>

using namespace std;


class Talent {
public:
    virtual void show_talent() = 0;
};

class Swimming : public Talent {
public:
    void show_talent() override {
        std::cout << "It can swim" << std::endl;
    }
};

class Dancing : public Talent {
public:
    void show_talent() override {
        std::cout << "It can dance" << std::endl;
    }
};

class Counting : public Talent {
public:
    void show_talent() override {
        std::cout << "It can count" << std::endl;
    }
};

class Dog {
private:
    std::string name;
    std::vector<Talent*> talents;

public:
    Dog(const std::string& name) : name(name) {}

    void add_talent(Talent* talent) {
        talents.push_back(talent);
    }

    void show_talents() {
        std::cout << "This is " << name << " and it has some talents:" << std::endl;
        for (const auto& talent : talents) {
            talent->show_talent();
        }
    }
};

int main()
{
 
    Dog dog1("Steve");

    dog1.add_talent(new Dancing());
    dog1.add_talent(new Swimming());
    dog1.add_talent(new Counting());
    dog1.show_talents();
    
 
   return 0; 


   
}