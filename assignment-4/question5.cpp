#include <iostream>
using namespace std;

class base
{
public:
  int x;
};
class num1 : public base
{
public:
  num1()      //constructor to initialize x in base class num1
  {
    x = 10;
  }
};
class num2
{
public:
  int y;
  num2()   //constructor to initialize num2
  {
    y = 4;
  }
};
class num3 : public num1, public num2   //num3 is derived from class num1 and class num2
{
public:
  void sum()
  {
    cout << "Sum= " << x + y;
  }
};

int main()
{



  num3 obj1;          //object of derived class num3 which is sum
  obj1.sum();
  return 0;
}
