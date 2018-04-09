#include <iostream>
using namespace std;

int tam1 (char V[]){
    int cont = 0;
    for  (int i=0;V[i]!='\0';i++)
    {
        cont++;
    }
    return cont;

}
int tam2 (char V[]){
    char *p1=V;
    char *p2=V;
    while (*p2 != '\0'){
        p2++;
    }
    return p2-p1;
}

int main() {
  //char a[] = {'h','o','l','a','\0'};
  char a[] = "hola pero";
  int as = 0;
  int pala1= tam1(a); /// funcion por matrices
  int pala2= tam2(a); /// funcion con punteros
  cout << pala2;
}
