#include <windows.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
  setlocale(LC_ALL,"Russian");
  float a=0,b=0,result=0;
  char c;

  cout<<"Введите первый операнд: ";
  cin>>a;
  cout<<"Введите второй операнд: ";
  cin>>b;
  cout<<"Введите операцию: ";
  cin>>c;

  switch(c){
    case '+':
      result=a+b;
      cout<<"Результат: "<<result;
      break;
    case '-'  :
      result=a-b;
      cout<<"Результат: "<<result;
      break;
    case '*'  :
      result=a*b;
      cout<<"Результат: "<<result;
      break;
    case '/'  :
      if(b!=0){
        result=a/b;
        cout<<"Результат: "<<result;
      }
      else
        cout<<"Деление на 0";
      break;
    default:
      cout<<"Неверная операция";
      break;
  }

  return 0;
}
