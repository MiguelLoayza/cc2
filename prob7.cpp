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

void juntar(char *A, char B[]){
  A+=tam2(A);
  int lenb=tam2(B);
  for(char i=0;i<=lenb;i++)
  {
      *(A++)=B[i];
  }
}
void juntarp (char *A, char *B){

  A+=tam2(A);
  int lenb=tam2(B);
  for(char i=0;i<=lenb;i++)
  {
      *(A++)=*(B++);
  }

}


int main() {
  char A[]="hola ";
  char B[]="como vas";
  char *pA = A;
  char *pB = B;
  //juntar(A,B);
  juntarp(pA,pB);
  cout << A ;
}
