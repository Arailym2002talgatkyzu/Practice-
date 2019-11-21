#include <iostream>
#include <cmath>

#include<algorithm>
using namespace std;
int main ()
{
int x, y, z, s;
cin>>x>>y>>z>>s;
if(x%2!=0&&y%2!=0&&z%2!=0&&s%2!=0){
    cout<<" Not found";
}

int a=x%2==0&&x>y&&x>z&&x>s?x:y%2==0&&y>z&&y>s?y:z%2==0&&z>s?z:s;
cout<<a;
  return 0;
}
