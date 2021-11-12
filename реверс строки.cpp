#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

void reverse(const string &inTemp);

int main()
{
  setlocale(LC_ALL,"Russian");
  string str;

  cout<<"Введите строку"<<endl;
  getline(cin,str);

  cout<<"Реверс: ";
  reverse(str);

	return 0;
}

void reverse(const string &inTemp){
  size_t lenStr=inTemp.size();

  if(lenStr==0)
    cout<<endl;
  else{
    cout<<inTemp[lenStr-1];
    reverse(inTemp.substr(0,lenStr-1));
  }
}
