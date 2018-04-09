#include <iostream>
using namespace std;
#define tam 3
void multiplicar(int A[tam][tam], int B[tam][tam], int C[tam][tam]){
  for(int i=0; i<tam; ++i)
  {
    for(int j=0; j<tam; ++j)
    {
      for(int z=0; z<tam; ++z)
      {
        C[i][j] += A[i][z] * B[z][j];
      }
    }
  }
}

int main() {
  int A [tam][tam]={{8,7,12},{9,22,2},{12,2,33}} , B[tam][tam]={{1,0,0},{0,1,0},{0,0,1}}, C[tam][tam]={{}};
  int a=tam, b=tam;

  multiplicar(A,B,C);

  cout<<"La matriz resultado es: "<<endl;
  for(int i=0; i<a; ++i)
  {
    for(int j=0; j<b; ++j)
    {
      cout<<C[i][j]<<" ";
    }
    cout<<endl;
  }
}
