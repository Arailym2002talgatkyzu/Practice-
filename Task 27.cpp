#include <iostream>
#include <cmath>
using namespace std;
int
main ()
{
  int a, b, c, d, e, f;
  cin >> a >> b >> c;
  d = a;
  e = b;
  f = c;
  a = a + b;
  b = f - d;
  c = d + e + f;

  cout << a << " " << b << " " << c;
  return 0;
}
