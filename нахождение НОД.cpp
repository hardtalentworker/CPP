#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  setlocale(LC_ALL,"Russian");
  int a=0,b=0,nod=0,i=0;

  cout<<"Поиск наибольшего общего делителя(НОД)"<<endl;
  cout<<"Введите два числа"<<endl;
  cin>>a>>b;
  a=(a<0?-a:a);
  b=(b<0?-b:b);

  while(i<=((a<b)?a:b)){
    i++;
    if((b%i==0)&&(a%i==0))
      nod=i;
  }

    if(nod==0)
      cout<<"НОК для "<<a<<" и "<<b<<" не найден"<<endl;
    else
      cout<<"НОК для "<<a<<" и "<<b<<" = "<<nod<<endl;

	return 0;
}
