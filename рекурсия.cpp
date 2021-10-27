#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int factorial(int inTemp);

int main()
{
  setlocale(LC_ALL,"Russian");
  int a=0;

  cout<<"Введите число"<<endl;
  cin>>a;

  cout<<"Факториал "<<a<<" = "<<factorial(a)<<endl;

	return 0;
}

int factorial(int inTemp){
  if(inTemp>1)
    return inTemp*factorial(inTemp-1);
  else
    return 1;
}
