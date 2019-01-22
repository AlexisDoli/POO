#include <iostream>
#include <locale>

using namespace std;

struct articulo{
    char nombre_Cliente[30];
    int tipo_Cliente, hojas_Compradas;
    float precio_Hoja;
}Cliente;

void ingresar_Datos(){
    cout<<"nombre"; cin>> Cliente.nombre_Cliente;
    cout<<"tipo"; cin>> Cliente.tipo_Cliente;
    cout<<"hojas"; cin>> Cliente.hojas_Compradas;
    cout<<"hojasprecio"; cin>> Cliente.precio_Hoja;
}

void mostrar_Datos(){
        cout<<endl<<endl<< "nombre"; cout<<Cliente.nombre_Cliente;

        float subtotal, descuento, neto, tipo;

        if(Cliente.tipo_Cliente == 1){               //
            tipo = 0.05;                            //
        } else if (Cliente.tipo_Cliente == 2){       //
            tipo = 0.08;                            //      
        } else if (Cliente.tipo_Cliente == 3){       //
            tipo = 0.12;                            //
        } else if (Cliente.tipo_Cliente == 4){       //
            tipo = 0.15;
        }

        subtotal = Cliente.hojas_Compradas*Cliente.precio_Hoja;
        descuento = subtotal*tipo;
        neto = subtotal-descuento;

        cout<<"Subtotal:  "<<subtotal<<endl;
        cout<<"Descuento: "<<descuento<<endl;
        cout<<"Neto:      "<<neto<<endl;
}


int main(){
    setlocale(LC_ALL,"spanish");
    cout<<"Hola"<<endl;

    ingresar_Datos();
    mostrar_Datos();

    return 0;
}
