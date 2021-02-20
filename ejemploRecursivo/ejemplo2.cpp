#include<iostream>
using namespace std;

void escribir(string frase, int n);

int main(){
    string f;
    int n=5;
    cout << "Escribe una frase. Yo la repetire 5 veces." << endl;
    getline(cin, f);
    cout << endl;
    escribir(f,n);
}

void escribir(string frase, int n){
    cout << n << " : " << frase << endl;
    n--;
    if (n>0) escribir(frase,n);
}