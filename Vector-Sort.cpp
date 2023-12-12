#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int a;
#include<random>
int main() {
    vector<int> v;
    int size;
    cin>>size;
    
    for(int i=0;i<size;i++){
        cin>>a;
     v.push_back(a);
    }
  
    sort(v.begin(),v.end());
    for (auto x : v)
        cout << x << " ";
}
