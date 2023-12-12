#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
    public:
        void triangle(){
            cout<<"I am a triangle\n";
        }
};
class Isosceles : public Triangle{
    public:
    void isosceles (){
        cout<<"I am an isosceles triangle\n";
    }
    void hello(){
        cout<<"In an isosceles triangle two sides are equal\n";
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    Isosceles isc;
    isc.isosceles();
    isc.hello();
    isc.triangle();
    return 0;
}
