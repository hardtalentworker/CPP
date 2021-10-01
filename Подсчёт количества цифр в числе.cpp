#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  setlocale(LC_ALL,"Russian");
  int a=0,i=0,b=0;

  cout<<"Подсчёт количества цифр в числе"<<endl;
  cout<<"Введите число"<<endl;
  cin>>a;
  b=a;

  while(a!=0){
    i++;
    a/=10;
  }

  cout<<"Количество цифр в числе "<<b<<" составляет "<<i<<endl;

	return 0;
}
