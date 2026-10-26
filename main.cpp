#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int cantidad;
    double ingreso;
    vector<double> listanumeros;
    
    cout << "¿Cuantos datos numericos deseas ingresar?: ";
    cin >> cantidad;
    
   for (int i = 0; i < cantidad; i++) {   
       cout << "Ingresa El Numero " << (i+1) << endl;
       cin >> ingreso;
       listanumeros.push_back(ingreso);   
   }
     double suma = 0;
    for (int i = 0; i < listanumeros.size(); i++) {
        suma = suma + listanumeros[i];
    }
    
    double promedio = suma / listanumeros.size();
    double raizSuma = sqrt(suma);
    double raizPromedio = sqrt(promedio);

    cout << "=== REPORTE FORMATEADO ===" << endl;
    cout << "[+] Cantidad de datos analizados -> " << listanumeros.size() << endl;
    cout << "[+] Lista de números guardados -> ";
    for (int i = 0; i < listanumeros.size(); i++) {
        cout << listanumeros[i] << " ";
    }
    cout << endl;

    cout << "[+] Suma Total de los numeros guardados -> " << suma << endl;
    cout << "[+] Promedio Total de los numeros guardados -> " << promedio << endl;
    cout << "[+] Raiz Cuadrada de la suma total de los numeros -> " << raizSuma << endl;
    cout << "[+] Raiz Cuadrada del promedio total de los numeros -> " << raizPromedio << endl;

    return 0;
}
