#include <iostream>
#include <stdlib.h>  //bibllioteca que genera numeros randomicos
#include <time.h> //libreria para manejar el tiempo
using namespace std;

void llenardatos(int v[], int ne)
{
    srand(time(NULL)); //PARA GENERAR NUMEROS
    for(int i=0; i<ne;i++)
    {
        v[i]=rand()%20+1;
    }
}

void verDatos(int v[],int ne)
{
    cout<<"Los elemntos del vector son: "<<endl;
    for(int i=0;i<ne;i++)
    {
        cout<<v[i]<<" ";
    }


}

float sumaPromediocifras(int v[],int ne)
{
    int i,suma=0;
    for(i=0;i<ne;i++)
    {
        suma+=v[i];
    }
    return (float)suma/ne;
}

int contardebajopromedio(int v[], int ne , float promedio)
{
    int contador=0;
    for(int i=0;i<ne;i++)
    {
         if(v[i]<promedio)
        {
        contador++;
        }

    }
   
    return contador;

}
void guardaelementosmenores(int v[],int ne, float promedioNumeros,int lista[])
{

    int i, j=0;
    if(v[i]<promedioNumeros)
    {
        lista[j]=v[i];
        j++;
    }
}


main()
{
    int ne,menores;
    float promedioNumeros;
    cout<<"Cuantos elementos tiene el vector: ";
    cin>>ne;
    int vector[ne];
    llenardatos(vector,ne);
    verDatos(vector,ne);
    promedioNumeros=sumaPromediocifras(vector,ne);
    cout<<"El promedio de los datos generados es "<<promedioNumeros<<endl;
    menores= contardebajopromedio(vector,ne,promedioNumeros);
    cout<<"Los elementos debajo del promedio son: "<<menores;
    int listamenores[menores];
    guardaelementosmenores(vector,ne,promedioNumeros,listamenores);
    verDatos(listamenores,menores);

}


