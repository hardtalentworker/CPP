#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  setlocale(LC_ALL,"Russian");
  int a=0,b=0;
  float temp=0.0;

  cout<<"Вычисление обратного числа"<<endl;
  cout<<"Введите число"<<endl;
  cin>>a;

  while(a!=0){
    b*=10;
    temp=a%10;
    a/=10;
    b+=temp;
  }

  cout<<"Обратное число - "<<b<<endl;

	return 0;
}
