#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;
int main ()
{
int x, y, z, s;
cin>>x>>y>>z;
s=x>y&&x>z?x:y>x&&y>z?y:z;
cout<<s;
  return 0;
}
