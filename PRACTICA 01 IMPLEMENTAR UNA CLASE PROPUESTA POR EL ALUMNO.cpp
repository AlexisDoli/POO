/*  
    Nombre: Domínguez López Iván Alexis
    Descripción:
        Implementar una clase propuesta por el alumno, que derive cuatro objetos que tenga relación con la clase (class propuesta) con cuatro atributos o características( variables miembro)
*/
#include <iostream>

using namespace std;

class Musica // Se define la clase Musica
{
private:
    string genero,cancion, artista, fecha; //Definen atributos 
public:                                    //Metodos de la clase
    void ingresarDatos(string a, string b, string c, string d);
    void mostrarDatos();
};

void Musica::ingresarDatos(string a, string b, string c, string d){ // Metodo que va permitir la entrada de datos
    genero = a;
    cancion = b;
    artista = c;
    fecha = d;
}

void Musica::mostrarDatos(){        //Metodo para mostrar los datos 
    cout<<"--- Cancion:" <<cancion<<"---"<<endl<<endl;
    cout<<"Genero:      "<<genero<<endl;
    cout<<"Artista:     "<<artista<<endl;
    cout<<"Fecha de lanzamiento:    " <<fecha<<endl<<endl<<endl;        
}


int main(){                                 //Función princpal
    Musica cUno, cDos, cTres, cCuatro;

    cUno.ingresarDatos("Jazz", "Rose", "Davis","1990");
    cDos.ingresarDatos("Blues", "In blue", "Rogers","1995");
    cTres.ingresarDatos("Pop", "Hello sun", "Candy","2000");
    cCuatro.ingresarDatos("Rock", "For you", "Amadeus","1995");
    
    cUno.mostrarDatos();
    cDos.mostrarDatos();
    cTres.mostrarDatos();
    cCuatro.mostrarDatos();

} //Cierre de la función pricipal
