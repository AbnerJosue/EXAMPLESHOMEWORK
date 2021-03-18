//Ejercicios de Transformacion de iteratividada a recursividad
/*Fecha: 06/03/2021
Crear un programa que emplee recursividad para calcular la sum  los elementos de un vector*/
#include<iostream>

using namespace std;


int vector(int AX,int BX){
	return AX+BX;
}
int vector2(int AY,int BY){
	return AY+BY; 
}
int main(){
	int AX; int BX; int AY; int BY; 
	cout<<"Ingrese vector X(A)"<<endl;
	cin>>AX;
	cout<<"Ingrese vector X(B)"<<endl;
	cin>>AY;
	cout<<"Ingrese vector Y(A)"<<endl;
	cin>>BX;
	cout<<"Ingrese vector Y(B)"<<endl;
	cin>>BY;
	cout<<"la suma de los vectores es: ("<<vector(AX,AY)<<","<<vector2(BX,BY)<<")"<<endl;
}
