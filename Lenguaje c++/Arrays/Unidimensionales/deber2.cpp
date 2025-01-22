#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void llenardatos(float tabla[10][10], int fil, int col){
        for(int i=0;i<fil;i++ ){
         for(int k=0;k<col;k++){
            srand(time(NULL));
            tabla[i][k]=rand()%(20-10+1)+10;
           
         }
            
    }     
}

void imprimirtabla(float tabla[10][10], int fil, int col ){
    for(int i=0;i<fil;i++){
        for(int k=0;k<col;k++){
            srand(time(NULL));
            tabla[i][k]=rand()%(20-10+1)+10;
            cout<<tabla[i][k]<<"\t";
        }
        cout<<endl;
    }
}

float sumadiagonaprincipal(float tabla[10][10], int fil, int col){
    float suma=0;
    for(int i=0;i<fil;i++){
        for(int k=0;k<col;k++){
            if(i==k){
                suma+=tabla[i][i];
                cout<<"La suma de los elementos de la diagonal principal es "<<suma<<endl;
            }

        }
    }
}

float sumadiagonalsecundaria(float tabla[10][10], int fil, int col){
    float suma=0;
    for(int i=0;i<fil;i++){
        for(int k=0;k<col;k++){
            if(i==k){
                suma+=tabla[i][col-1-i];
                cout<<"La suma de los elementos de la diagonal secundaria es "<<suma<<endl;
            }

        }
    }

}

    

main()
{
    int num;
    cout<<"Introduce el numero de filas las mismas que deben ser para las columnas: ";
    cin>>num;
    if(num<=0||num>10){
        cout<<"Existe un error, intenta de nuevo por favor:";
        return 1;
    }
    float tabla[10][10];

    llenardatos(tabla,num,num);
    imprimirtabla(tabla,num,num);
    sumadiagonaprincipal(tabla,num,num);
    sumadiagonalsecundaria(tabla,num,num);





}
