#include <iostream> 
#include <stdio.h> 
using namespace std;

main()
{
    int r,a,num;
    cout <<"Ingrese un numero: ";
    cin >> num;
    cout <<"Ingrese un numero: ";
    cin >> a;

    r=num%a;
    if(r==0)
    {
     cout<<"El numero "<<num<<" es divisble para "<< a << endl;
     printf("El numero %d es divisible para %d \n ",num,a);
    }
    
 num=0;

}