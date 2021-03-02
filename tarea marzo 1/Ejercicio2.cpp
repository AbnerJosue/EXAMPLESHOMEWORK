#include <iostream>
#include <fstream>
using namespace std;
// se crea la funcion principal para poder ejercutar el proyecto
int main() {
   char cadena[128];
   // se crea un arreglo el cual tendra 128 digitos ya que declarado con una variable tipo char
   ifstream fe("numeros.txt"); // el ifstream es una metodo el cual ejecuta para poder abrir el archivo ya sea si el archivo existe o no

   while(!fe.eof()) { // se crea un bucle el cual hace que ingrese todo los datos 
      fe >> cadena; // manda los datos 
      cout << cadena << endl; // los muestra
   }
   fe.close(); // y cierra el archivo 

   return 0; // termina el programa 
}
