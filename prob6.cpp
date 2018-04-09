#include <iostream>
using namespace std;

int tam2 (char V[]){
    char *p1=V;
    char *p2=V;
    while (*p2 != '\0'){
        p2++;
    }
    return p2-p1;
}

int tamp (char *p2){
    int tam=0;
    while (*p2 != '\0'){
        tam++;
        p2++;
    }
    return tam;
}


void cambio(char A[], char B[]){
  if (tam2(A)>tam2(B)){
    for (int i=tam2(B);A[i]!='\0'; i++)
      A[i]=' ';
  }

  for (int i=0; i<tam2(B);i++){
    A[i]=B[i];
  }

}

void cambiop (char *A, char *B){

  for ( ; *B!='\0';B++,A++)
    *A = *B;

  for ( ; *A!='\0' ; A++)
    *A=' ';

}


int main() {
  char A[]="hol";
  char B[]="aszzds";
  int pal1 = tam2(A); // paqui
  int pal2 = tam2(B); //de aqui
  char *pA = A;
  char *pB = B;
  //cambio(A,B);
  cambiop(pA,pB);
  cout << A<<"  --  "<<B;
}
