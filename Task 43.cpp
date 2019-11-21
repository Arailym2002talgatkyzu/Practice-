#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;
int main ()
{
int x;
cin>>x;
if(x==1||x==2||x==12){
    cout<<"Winter";
}
else if(x>=3&&x<=5){
  cout<<"Spring";
}
else if(x>=6&&x<=8){
   cout<<"Summer";
}
else if(x>=9&&x<=11){
   cout<<"Outumn";
}

  return 0;
}
