#include <iostream>
using namespace std;

void suma1 (int n){
    n++;
}

void suma2 (int n,int &n2){
    n2= n2+n;
}

int main(){
  int n=5 , n2=1;
  suma1(n); /// paso por valor
  suma2(n,n2); /// paso por referencia
  cout << "Sumando paso por valor      " << n << endl;
  cout << "Sumando paso por referencia " <<n2;
}
