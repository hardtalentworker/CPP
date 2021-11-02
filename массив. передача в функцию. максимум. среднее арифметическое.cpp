#include<iostream>
#include<ctime>

using namespace std;

int printArray(int *inA, int inN);

int main(){
	int a[100];
  float sum=0.0;
  srand(time(0));

  for(int i=0;i<100;i++){
    a[i]=rand()%32000;
    sum+=a[i];
    if(a[0]<a[i])
      a[0]=a[i];
  }

	cout<<endl<<"Array: ";
  printArray(a,100);
  cout<<endl<<"Среднее арифметическое - "<<sum/100<<endl;
  cout<<"Максимум - "<<a[0]<<endl;

	return 0;
}

int printArray(int *inA, int inN){
  for(int i=0;i<inN;i++){
    cout<<inA[i]<<", ";
  }
  return 0;
}
