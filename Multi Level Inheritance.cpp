#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle {
      public:
          void get_triangle(){
            cout<<"I am a triangle\n";
          }
};
class Isosceles:public Triangle{
    public:
    void get_isosceles()
    {
        cout<<"I am an isosceles triangle\n";
    }
}; 



class Equilateral : public Isosceles{
    public:
        void get_equilateral(){
        cout<<"I am an equilateral triangle\n";
        }
};



int main(){
  
  Equilateral o;
  o.get_equilateral();
  o.get_isosceles();
  o.get_triangle();
 return 0;
}
