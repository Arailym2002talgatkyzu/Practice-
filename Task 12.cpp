#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double  x;
    cin>>x;
   
 cout<<1.0*pow(M_E, (x-2))+1.0*abs(sin(x))-1.0*pow(x,4)*cos(1/x);
    return 0;
}