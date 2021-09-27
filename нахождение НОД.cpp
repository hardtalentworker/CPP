#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  setlocale(LC_ALL,"Russian");
  int a=0,b=0,result=0,i=0;

  cout<<"Поиск наибольшего общего делителя(НОД)"<<endl;
  cout<<"Введите два числа"<<endl;
  cin>>a>>b;
  a=(a<0?-a:a);
  b=(b<0?-b:b);

  while(i<=((a<b)?a:b)){
    i++;
    if((b%i==0)&&(a%i==0))
      result=i;
    cout<<i<<endl;
  }

  cout<<"НОД для "<<a<<" и "<<b<<" = "<<result<<endl;

	return 0;
}
