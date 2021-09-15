#include <windows.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
  setlocale(LC_ALL,"Russian");
  int a=0,b=0;
  float result=0;
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
      break;
    case '-'  :
      result=a-b;
      break;
    case '*'  :
      result=a*b;
      break;
    case '/'  :
      result=a/b;
      break;
  }
  cout<<"Результат: "<<result;

  return 0;
}
