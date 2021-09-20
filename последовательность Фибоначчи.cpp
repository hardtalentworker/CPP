#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  setlocale(LC_ALL,"Russian");
  int j=0,tm2=0,tm1=1;

  cout<<"Выберите как считать числа Фибоначчи."<<endl;
  cout<<"Вывести ряд по количеству чисел - 0"<<endl;
  cout<<"Вывести до максимального числа - 1"<<endl<<endl;
  cin>>j;
  if(j==0){
    cout<<"Введите количество цифр - ";
    cin>>j;
    cout<<tm2<<", "<<tm1;
    for(int i;i<=j-2;i++){
      int sum=tm2+tm1;
      tm2=tm1;
      tm1=sum;
      cout<<", "<<tm1;
    }
  }else if(j==1){
    cout<<"Введите максимальное число - ";
    cin>>j;
    cout<<tm2<<", "<<tm1;
    for(int i;tm1<=j;i++){
      int sum=tm2+tm1;
      tm2=tm1;
      tm1=sum;
      if(tm1<=j)
        cout<<", "<<tm1;
    }
  }

	return 0;
}
