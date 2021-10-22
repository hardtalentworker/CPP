#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

bool simpleOrNot(int inTemp);

int main()
{
  setlocale(LC_ALL,"Russian");
  int a=0;

  cout<<"Введите число"<<endl;
  cin>>a;

  for(int i=1;i<=a;i++){
    if((simpleOrNot(i))&&(simpleOrNot(a-i)))
      cout<<a<<" это сумма простых чисел "<<i<<" и "<<a-i<<endl;
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
