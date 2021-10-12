#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  setlocale(LC_ALL,"Russian");
  int a=1,b=0;

  cout<<"Вывод 100 простых чисел"<<endl;
  cout<<"Простые числа - "<<endl;

  for(int i=1;i<=100000;i++){
    for(int j=1;j<=(i/2);j++){
      if((i%j)==0)
        b++;
    }
    if(b==1)
      cout<<i<<" простое "<<endl;
    b=0;
  }

	return 0;
}
