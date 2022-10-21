#include <bits/stdc++.h>

using namespace std;

class Animal
{
public:
    virtual void sound() = 0;
    void sleeping()
    {
        cout << "Sleeping" << endl;
    }
};
class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Barking " << endl;
    }
};
int main (){

  Dog ob1;
  ob1.sound();
  ob1.sleeping();


  return 0;
}