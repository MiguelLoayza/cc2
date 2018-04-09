#include <iostream>
using namespace std;

int sumare(int A[], int tam){
  int suma = 0;
  if (tam == 0){
      return 0;
  }
  else{
      return A[tam-1] + sumare(A,--tam);
  }
}

int sumait(int A[], int tam){
  int resul = 0;
  for (int i =0; i<tam ; i++) {
      resul = resul + A[i];
  }
  return resul;
}

int main(){
  int A[4]={2,5,4,5};
  int tam = 4;
  int sol1 = sumare(A,tam);
  int sol2 = sumait(A,tam);
  cout <<"Funcion recursiva -- " <<sol1<<endl;
  cout <<"Funcion iterativa -- " <<sol2;
}
