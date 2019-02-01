/*  
    Nombre: Domínguez López Iván Alexis
    Descripción:
        Elaborar un programa en C++ e implementar la estructura struct: 
        Una empresa vende hojas de vidrio, con las condiciones siguientes:
        Si el cliente es tipo 1 se el descuenta el 4% 
        Si el cliente es tipo 2 se el descuenta el 7%
        Si el cliente es tipo 3 se el descuenta el 10%
        Si el cliente es tipo 4 se el descuenta el 15%
*/
##include <iostream>
#include <locale>

using namespace std;

struct data{    //Estructura de los datos
    char nombreCliente[30];
    int tipoCliente, hojasCompradas;
    float precioHoja;
}Cliente;

void ingresar_Datos(){ //Funcion que va a solicitar los datos para asignarlos al objeto Cliente

    cout<<"Nombre:                 "; cin>> Cliente.nombreCliente;
    cout<<"Tipo de cliente:        "; cin>> Cliente.tipoCliente;
    cout<<"Hojas compradas:        "; cin>> Cliente.hojasCompradas;
    cout<<"Precio de las hojas:    "; cin>> Cliente.precioHoja;
}

void mostrar_Datos(){
        cout<<endl<<endl<< "Nombre:    "; cout<<Cliente.nombreCliente<<endl;

        float tipo; 

        if(Cliente.tipoCliente == 1){               //
            tipo = 0.05;                            //
        } else if (Cliente.tipoCliente == 2){       //      if que nos va ayudar a que sepamos el porcentaje
            tipo = 0.08;                            //      de cada tipo de cliente y el descuento asignado
        } else if (Cliente.tipoCliente == 3){       //
            tipo = 0.12;                            //
        } else if (Cliente.tipoCliente == 4){       //
            tipo = 0.15;
        }

        float subtotal, descuento, neto;  // Variables para las operaciones 

        subtotal = Cliente.hojasCompradas*Cliente.precioHoja;   //
        descuento = subtotal*tipo;                              //  Operaciones 
        neto = subtotal-descuento;                              //

        cout<<"Subtotal:  "<<subtotal<<endl;
        cout<<"Descuento: "<<descuento<<endl;
        cout<<"Neto:      "<<neto<<endl;
}


int main(){
    setlocale(LC_ALL,"spanish");    //Permirte el uso de caracteres en español
    cout<<"Ingresa los datos solicitados"<<endl;

    ingresar_Datos();
    mostrar_Datos();

    return 0;
}
