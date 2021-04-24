#include <iostream>
using namespace std;

int main() {
  
  int num, cont = 0;

  cout<<"Informe numero: ";
  cin>>num;

  while(cont < num){
    cout<<cont+1<<endl;
    cont++;
  }
  return 0;
}