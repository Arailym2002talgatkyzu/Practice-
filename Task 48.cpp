#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;
int main ()
{
int x, y, z;
cin>>x>>y>>z;
if((x+y)>(x+z)&&(x+y)>(y+z)){
    cout<<x<<" "<<y;
}
else if((x+z)>(x+y)&&(x+z)>(y+z)){
    cout<<x<<" "<<z;
}
else {
    cout<<y<<" "<<z;
}

  return 0;
}
