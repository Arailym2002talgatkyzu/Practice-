#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double  x,a,b;
    cin>>x;
    a=1.0*((abs(x-5)-sin(x))/3);
    b=1.0*sqrt(x*x+2014)*cos(2*x);
 cout<<a+b-3;
    return 0;
}