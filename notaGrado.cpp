#include <iostream>

using namespace std;

int main () 
{
    int nota;
    char grado;

    cout << "Ingrese su nota: " << endl;
    cin >> nota;


    if (!cin) //Valida que no 
    {
        cout << "Error, Ingrese una nota valida." << endl;
        return 1;
    }
    else if (nota <= 100 && nota >= 90) 
    {
        grado='A';
    } 
    else if (nota < 90 && nota >= 85) 
    {
        grado='B';
    }
    else if (nota < 85 && nota >= 80) 
    {
        grado='C';
    }
    else if (nota < 80 && nota >= 75) 
    {
        grado='D';
    }
    else if (nota <= 74 && nota >= 69) 
    {
        grado='E';
    }
    else if (nota < 69) 
    {
        grado='F';
    }
    else if (nota <= 0 || nota > 100) 
    {
        cout << "Error, Ingrese una nota valida." << endl;
        return 1;
    } 

    switch (grado) 
    {
        case 'A': 
            cout << "Su grado es " << grado <<". Felicidades!" << endl;
            break;
        case 'B': 
            cout << "Su grado es " << grado <<". Excelente!" << endl;
            break;
        case 'C': 
            cout << "Su grado es " << grado <<". Bien!" << endl;
            break;
        case 'D': 
            cout << "Su grado es " << grado <<". Animo!" << endl;
            break;
        case 'E': 
            cout << "Su grado es " << grado <<". Echale ganas!" << endl;
            break;
        case 'F': 
            cout << "Su grado es " << grado <<". Estudia mas!" << endl;
            break;
    }

    return 0;

}

//Carlos Fernando Martinez Mogollon
//00181425