#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenarvector(int vector[], int n){
    srand(time(NULL));
    for(int i=0;i<n;i++){
        vector[i]=rand()%20+1;
       //cin>>vector[i];
    }
}

void muestravector(int vector[],int n){
    for(int i=0;i<n;i++){
        cout<<vector[i]<<" ";
    }
    cout << endl;
}

int ordenainsercion(int vector[],int n){
    int aux,j,contador=0;
    for(int i=0;i<n;i++){
        aux=vector[i];
        j=i-1;
        while(j>=0){
            contador++;
            if(aux<vector[j]){
                vector[j+1]=vector[j];
                vector[j]=aux;
            }
            j--;
        }
    }
    return contador;
}

main(){
    int ne,comparaciones;
    cout<<"Ingresa el numero de elementos que deseas para tu vector: "<<endl;
    cin>>ne;
    int vector[ne];
    llenarvector(vector,ne);
    cout<<"vector original: \n";
    muestravector(vector,ne);
    ordenainsercion(vector,ne);
    comparaciones= ordenainsercion(vector,ne);
    cout<<"Vector ordenado :\n";
    muestravector(vector,ne);
    cout<<"\nEl numero de comparaciones es igual: "<<comparaciones;


}