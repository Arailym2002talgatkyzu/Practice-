#include <iostream>
#include <cmath>
using namespace std;
int
main ()
{
  int a, b;
  cin >> a >> b;
  for(int i=0; i<5;i++){
      a+=a*0.01*b;
  }
cout << a ;
  return 0;
}
