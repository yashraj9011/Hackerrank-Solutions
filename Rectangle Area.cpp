#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Rectangle{
    public:
    int height;
    int width;
    public:
  void  display()
    {
        cin>>width>>height;
        cout<<width<<" "<<height<<endl;
    }
};
class RectangleArea : public Rectangle{
   public:
   int area;
   void  read_input()
    { 
        area= width * height;
        cout<<area;
        }
    
};
    
int main() {
  
    RectangleArea a;
    a.display();
    a.read_input(); 
    return 0;
}
