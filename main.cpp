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
        cout << "It can swim" << endl;
    }
};

class Dancing : public Talent {
public:
    void show_talent() override {
        cout << "It can dance" << endl;
    }
};

class Counting : public Talent {
public:
    void show_talent() override {
        cout << "It can count" << endl;
    }
};

class Dog {
private:
    string name;
    vector<Talent*> talents;

public:
    
    Dog(string name)
    {
      this->name = name;
    }

    void add_talent(Talent* talent) {
        talents.push_back(talent);
    }

    void show_talents() {
        cout << "This is " << name << " and it has some talents:" << endl;
        for (auto talent : talents) {
            talent->show_talent();
        }
    }
};

int main()
{
 
    Dog dog1("Steve");
    Talent * pr = new Counting();
    dog1.add_talent(new Dancing());
    dog1.add_talent(new Swimming());
    //dog1.add_talent(new Counting());
    dog1.add_talent(pr);
    dog1.show_talents();
    
 
   return 0; 


   
}