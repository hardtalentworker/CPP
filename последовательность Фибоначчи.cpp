#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  setlocale(LC_ALL,"Russian");
  int j=0,tm2=0,tm1=1;

  cout<<"Введите количество цифр - ";
  cin>>j;
  cout<<tm2<<", "<<tm1;
  for(int i;i<=j-2;i++){
    int sum=tm2+tm1;
    tm2=tm1;
    tm1=sum;
    cout<<", "<<tm1;
  }

	return 0;
}
