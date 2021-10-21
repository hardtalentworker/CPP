#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

bool simpleOrNot(int inTemp);

int main()
{
  setlocale(LC_ALL,"Russian");
  //int a=1;

  cout<<"Вывод 100000 простых чисел"<<endl;
  cout<<"Простые числа - "<<endl;

  for(int i=1;i<=100000;i++){
    if(simpleOrNot(i))
      cout<<i<<" простое "<<endl;
  }

	return 0;
}

bool simpleOrNot(int inTemp){
  int b=0;
  for(int j=1;j<=(inTemp/2);j++){
      if((inTemp%j)==0)
        b++;
    }
    if(b==1)
      return 1;
    else
      return 0;
}
