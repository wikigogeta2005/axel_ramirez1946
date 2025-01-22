#include  <iostream>
using namespace std;

void llenavector(int vector[], int tamaño)
{
    for(int i=0 ; i< tamaño; i++)
    {
        cout<<"Introduce el valor del elemento "<<i+1<<": ";
        cin>>vector[i];

    }
}

void verVector (int vector[], int tamaño)
{
    for( int i=0; i<tamaño ; i++)
    {
        cout<<"El elemnto"<<i+1<<"del vector es: "<<vector[i]<<endl;
    }
}

main()
{
    int ne;
    cout<<"Cuantos elementos tiene el vector: ";
    cin>>ne;
    int vector[ne];
    llenavector(vector,ne);
    verVector(vector,ne);


}