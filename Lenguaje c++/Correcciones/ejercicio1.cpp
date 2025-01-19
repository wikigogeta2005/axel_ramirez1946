#include <iostream>
using namespace std;

main()
{
    int num1,num2,num3;
    cout<<"Por favor, Ingrese un primer numero: ";
    cin>>num1;
    cout<<"Por favor, Ingrese un segundo numero: ";
    cin>>num2;
    cout<<"Por favor, Ingrese un tercer numero: ";
    cin>>num3;

    if (num1==num2&&num2==num3)
       {
        cout<<"los numeros son iguales "<<endl;
       } 

    else if(num1>=num2&&num1>=num3)
    {
        cout<<"El mayor de todos los numeros ingresados es: "<<num1<<endl;
    }
    else if(num2>=num1&&num2>=num3)
    {
        cout<<"El mayor de todos los numeros ingresados es: "<<num2<<endl;
    }
    else if (num3>=num1 || num3>=num2)
    {
       cout<<"El mayor de todos los numeros ingresados es: "<<num3<<endl;
    }

}