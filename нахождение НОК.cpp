#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  setlocale(LC_ALL,"Russian");
  int pp=0,a=0,b=0,result=0,minimal=0;

  cout<<"Поиск наименьшего общего кратного(НОК)"<<endl;
  cout<<"Выберите способ поиска:"<<endl;
  cout<<"1 - перебор до 1000 вариантов"<<endl;
  cout<<"2 - поиск через НОД"<<endl;
  cin>>pp;
  cout<<"Введите два числа"<<endl;
  cin>>a>>b;
  a=(a<0?-a:a);
  b=(b<0?-b:b);
  int nod=0,i=0;
  switch(pp){
    case 1:
      minimal=(a<b?a:b);

      for(int i=1;i<=a*b;i++){
        if(((minimal*i)%a==0)&&((minimal*i)%b==0)&&(result==0))
          result=minimal*i;
      }
      break;
    case 2:
      while(i<=((a<b)?a:b)){
      i++;
      if((b%i==0)&&(a%i==0))
        nod=i;
      }
      result=a*b/nod;
      break;
    default:
      cout<<"Выбран неверный пункт - "<<pp<<endl;
      break;
  }
    if(result==0)
        cout<<"НОК для "<<a<<" и "<<b<<" не найден"<<endl;
      else
        cout<<"НОК для "<<a<<" и "<<b<<" = "<<result<<endl;

	return 0;
}
