#include <windows.h>
#include <iostream>
#include <cmath>

using namespace std;
bool year(int a);

int main(){
  setlocale(LC_ALL,"Russian");
  int a=1000,b=2100;

  for(int i=a;i<=b;i++){
    if(year(i))
      cout<<i<<endl;
  }

  return 0;
}

bool year(int a){
  if((((a%100)!=0)&&((a%4)==0))||(((a%100)==0)&&((a%400)==0)))
    return(1);
  else
    return(0);
}
