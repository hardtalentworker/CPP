#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  setlocale(LC_ALL,"Russian");
  int a=0,a1=0,b=0;
  float temp=0.0;

  cout<<"Проверка на палиндром"<<endl;
  cout<<"Введите число"<<endl;
  cin>>a;
  a1=a;

  while(a!=0){
    b*=10;
    temp=a%10;
    a/=10;
    b+=temp;
  }

  cout<<"Обратное число - "<<b<<endl;
  if(a1==b)
    cout<<"Число "<<a1<<" является палиндромом"<<endl;
  else
    cout<<"Число "<<a1<<" НЕ является палиндромом"<<endl;

	return 0;
}
