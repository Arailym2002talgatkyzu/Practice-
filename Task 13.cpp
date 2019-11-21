#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double  x, a, b;
    cin>>x>>a>>b;
   
 cout<<1.0*pow((x*x+b), 1/5)-1.0*((b*b*pow((sin(x+a)),3))/3);
    return 0;
}