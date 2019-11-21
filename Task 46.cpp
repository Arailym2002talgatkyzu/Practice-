#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;
int main ()
{
int x, y, z, sum=0;
cin>>x>>y>>z;
if(x%5!=0&&y%5!=0&&z%5!=0){
    cout<<"Error";
}
   sum+=x%5==0?x:0;
   sum+=y%5==0?y:0;
   sum+=z%5==0?z:0;
   cout<<sum;
  return 0;
}
