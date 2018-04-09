#include <iostream>

///EJERCICIO 03--- Merge Sort
void MergeSort(int inicio,int fin,int *lista){
    if(fin - inicio == 0 || fin - inicio == 1)/// Se declara una excepcion por si la lista es vacia o de un solo elemento
        return;                             /// Retorna la misma
    int medio= (inicio + fin)/2;/// Se define el punto medio de la lista
    MergeSort(inicio,medio,lista);/// Se divide en sublista a la izquierda
    MergeSort(medio,fin,lista);/// Se divide en sublista a la derecha

    int puntero1 = inicio,
        puntero2 = medio,
        puntero3 = 0;

    int array[fin-inicio];/// Se define la mitad de la lista tomada

    ///Mezclamos las sub-lista de derecha y de izquierda, en el arreglo array.
    while(puntero1<medio || puntero2<fin){
        if(puntero1<medio && puntero2<fin){
            if(lista[puntero1]<lista[puntero2]){
                array[puntero3++] = lista[puntero1++];
            }else{
                array[puntero3++] = lista[puntero2++];
            }
        }else if(puntero1<medio){
            array[puntero3++] = lista[puntero1++];
        }else{
            array[puntero3++] = lista[puntero2++];
        }
    }
    for(int i=0;i<fin-inicio;i++){
        lista[inicio+i]=array[i];
    }
}
///EJERCICIO 03 --- Quick Sort


void leeCadena(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<"Ingresa numero "<<i+1<<": ";
        cin>>n[i];
    }

}

void muestraCadena(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<n[i]<<endl;
    }
}
void quicksort(int A[],int izq, int der )
{
int i, j, x , aux;
i = izq;
j = der;
x = A[ (izq + der) /2 ];
    do{
        while( (A[i] < x) && (j <= der) )
        {
            i++;
        }

        while( (x < A[j]) && (j > izq) )
        {
            j--;
        }

        if( i <= j )
        {
            aux = A[i]; A[i] = A[j]; A[j] = aux;
            i++;  j--;
        }

    }while( i <= j );

    if( izq < j )
        quicksort( A, izq, j );
    if( i < der )
        quicksort( A, i, der );
}
