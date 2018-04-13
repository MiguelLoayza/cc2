#include <iostream>
#include <math.h>
using namespace std;


float cambio(int *cadena,int x,int y)
{
    float numero=0.0;
    for(int i=0;i<(y-1);i++)
        {
            numero+=cadena[i]*pow(10,(x-1));
            x--;
        }
    return numero;
}
float haciafloat(char *cadena)
{
    int posi=0;
    int cad[posi];
    int coma=-1,p=0,s=0;
    float num=0;

    while(cadena[posi]!='\0'){
        posi++;
    }

    for(int i=0; i<posi;i++)
    {
      if ((cadena[i]-'0')>=0 && (cadena[i]-'0')<=9){
        cad[p]=cadena[i]-'0';
        p++;
      }
      else if (cadena[i]-'0'== -4){
        coma=p;
      }
      else
          s++;
    }


    cout<<endl;
    num=cambio(cad,coma,posi-s);
    return num;
}
int main()
{
    char *cadena="1123,34";
    cout<<haciafloat(cadena)<<endl;
    return 0;
}
