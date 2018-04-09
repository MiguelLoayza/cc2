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

bool palindrome(char *s){
    int tam = tam2(s);
    for (int i =0;i<tam/2;i++){
        if (*(s+tam-1-i) != *(s+i))
            return false;
    }
    return true;
}

int main() {
  char cad[]="";
  cout<<"Cadena? ";
  cin>> cad;
  if (palindrome(cad)==true)
      cout<<"Si es palindrome";
  else
      cout <<"No es palindrome";
}
