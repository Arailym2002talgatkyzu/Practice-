#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;
int main ()
{
int x, y;string a;
cin>>x>>y;
if(x>y){
    cout<<"Yes";
}
else{
    swap(x,y);
    cout<<x<<" "<<y;
}
  return 0;
}
