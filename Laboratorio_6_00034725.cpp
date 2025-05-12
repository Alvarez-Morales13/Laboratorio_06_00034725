#include <iostream>
using namespace std;

int main(){
    //Declaración de las variables
    int numero;
    cout << "Ingrese un numero" << endl;
    cin >> numero;

    //Ejecución del codigo mientras se cumpla la condición
    for (int i = 1; i <=12; i++){
        cout << numero << "X" << i << "=" << numero*i << endl;
    }
    
return 0; 


}