#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 int age;
string first_name[50];
string last_name[50];
int standard;
        
struct Student{
    
int age;
string first_name[50];
string last_name[80];
int standard;
        void output(){
     // cout<<" ";
      cin>>age;
   //   cout<<age;
   //   cout<<" ";
      cin>>first_name[50];
     // cout<<first_name[50];
      cin>>last_name[50];
  //   cout<<last_name[80];
      cin>>standard;
  //    cout<<standard;
      cout <<age << " " <<first_name[50] << " " <<last_name[50] << " " <<standard;
        }
        
    } ; 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   Student o;
   
   o.output();
    return 0;
}

