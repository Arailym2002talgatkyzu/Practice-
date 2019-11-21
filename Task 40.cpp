#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;
int main ()
{
int x;
cin>>x;
if(x>-10&&x<10){
    x=x-10;
}
else{
   x=x+5;
}
cout<<x;
  return 0;
}
