#include <windows.h>
#include <iostream>
#include <cmath>

using namespace std;
function float diskriminant(int a,b,c);

int main(){
  setlocale(LC_ALL,"Russian");
  int a,b,c;

  cout << "Введите a b и c " << endl;
  cin >> a>>b>>c;
  float d=diskriminant(a,b,c);
  //float d=pow(b,2)-4*a*c;

  if(d>0){
    cout<<"1) "<<(-b+sqrt(d))/(2*a);
    cout<<"2) "<<(-b-sqrt(d))/(2*a);
  }else if(d=0)
    cout<<"1) "<<(-b)/2*a*b;
  else
    cout<<"корней нет.";

  return 0;
}

function float diskriminant(int a,b,c){
  return(pow(b,2)-4*a*c);
}
