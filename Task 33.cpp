#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;
int main ()
{
int x, y;
cin>>x>>y;
if(y<0||(x-sqrt(y))<0){
    cout<<" no solution";
}
else{
    cout<<sqrt(x-sqrt(y));
}
  return 0;
}
