#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;
int main ()
{
int x;
cin>>x;
if(x>3){
    x=10+x;
}
else{
   x=x-10;
}
cout<<x;
  return 0;
}
