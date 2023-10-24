#include <iostream>
#include <vector>

using namespace std;

class Weapon
{
  public:
  virtual void shoot() = 0;
  
};

class Gun : public Weapon
{  
public:
 void shoot() override
{
  cout << "bang" << endl;
}
};

class SubmashineGan : public Gun
{ 
public:
 void shoot() override
{
  cout << "bang bang" << endl;
}
};

class Bazooka : public Weapon
{ 
public:
 void shoot() override
{
  cout << "badaboom" << endl;
}
};

class Pleer
{
public:
 void shoot(Weapon * weapon) 
{
  weapon->shoot();
}
};

int main()
{
 
  Pleer pleer;
  Gun gun;
  SubmashineGan submashineGan;
  Bazooka bazooka;
  pleer.shoot(& bazooka);

 
   return 0; 


   
}