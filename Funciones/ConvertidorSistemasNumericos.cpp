#include <iostream>
#include <string>
#include <cmath>
#include <cctype>  // Agregar la biblioteca para isdigit; se utiliza para el manejo de errores

using namespace std;

// Función de decimal a binario
string dec2bin(int NumDecimal) {
    if (NumDecimal == 0) {
        return "";  // Si el número es 0, el resultado regresa como un caracter vacio
    }
    return dec2bin(NumDecimal / 2) + to_string(NumDecimal % 2);  // Función recursiva para la transformaión del número
}

// Función de binario a decimal
long int bin2dec(int NumeroBinario) {
    if (NumeroBinario == 0) {
        return 0;  // Si el número binario es 0 se retorna 0
    }
    return NumeroBinario % 10 + 2 * bin2dec(NumeroBinario / 10);  // Función recursiva para la transformaión del número
}

// Función de decimal a hexadecimal
string dec2hex(int NumeroDecimal) {
    string Resultadohex = "";
    int Residuo;

    while (NumeroDecimal != 0) {
        Residuo = NumeroDecimal % 16;
        if (Residuo < 10) {
            Resultadohex = to_string(Residuo) + Resultadohex;  // Agregar dígitos al resultado
        } else {
            Resultadohex = char(Residuo + 55) + Resultadohex;  // Agregar letras hexadecimales al resultado
        }
        NumeroDecimal /= 16;  // Dividir el número decimal por 16
    }
    return Resultadohex;
}

// Función de hexadecimal a Decimal
int hex2dec(string NumeroHexadecimal) {
    int NumeroDecimal = 0;
    int base = 1;

    for (int i = NumeroHexadecimal.size() - 1; i >= 0; i--) {
        char Caracter = NumeroHexadecimal[i];
        int valor;

        if (Caracter >= '0' && Caracter <= '9') {
            valor = Caracter - '0';  // Convertir dígito a valor decimal
        } else {
            if (Caracter >= 'a' && Caracter <= 'f') {
                Caracter = Caracter - 'a' + 'A';  // Convertir letras minúsculas a mayúsculas para ecitar errores
            }
            switch (Caracter) {
                case 'A':
                    valor = 10;
                    break;
                case 'B':
                    valor = 11;
                    break;
                case 'C':
                    valor = 12;
                    break;
                case 'D':
                    valor = 13;
                    break;
                case 'E':
                    valor = 14;
                    break;
                case 'F':
                    valor = 15;
                    break;
                default:
                    cerr << "Número hexadecimal no válido." << endl;  // Manejo de error para caracteres no válidos
                    return 0;
            }
        }

        NumeroDecimal += valor * base;  // Calcular el valor decimal
        base *= 16;  // Incrementar la base o exponencial
    }
    cerr << "El número decimal es:" << endl;
    return NumeroDecimal;
}

bool esNumeroBinario(int numero) {
    while (numero > 0) {
        int digito = numero % 10;
        if (digito != 0 && digito != 1) {
            return false;  // Comprobar si los dígitos son 0 o 1
        }
        numero /= 10;
    }
    return true;  // Si todos los dígitos son 0 o 1, es un número binario
}

int main() {
    int EleccionMenu, NumDecimal, NumBinario;
    string NumHexadecimal;

    do {
        //Menú de conversiones para el uso de las diferentes operaciones
        cout << endl << "Menu de Conversiones:" << endl;
        cout << "1. Decimal a Binario" << endl;
        cout << "2. Binario a Decimal" << endl;
        cout << "3. Decimal a Hexadecimal" << endl;
        cout << "4. Hexadecimal a Decimal" << endl;
        cout << "5. Salir" << endl;
        cout << "Elija una opción: ";
        cin >> EleccionMenu;

        switch (EleccionMenu) {
            case 1:
                cout << "Ingrese un número decimal: ";
                cin >> NumDecimal;
                if (cin.fail() || NumDecimal < 0) {
                    cout << "Número entero no válido." << endl;  // Manejo de error para datos incorrectos
                    cin.clear();
                    cin.ignore();
                } else {
                    cout << "El número binario es: " << dec2bin(NumDecimal) << endl;
                }
                break;

            case 2:
                cout << "Ingrese un número binario: ";
                cin >> NumBinario;
                if (cin.fail() || !esNumeroBinario(NumBinario)) {
                    cout << "Número binario no válido." << endl;  // Manejo de error para datos incorrectos
                    cin.clear();
                    cin.ignore();
                } else {
                    cout << "El número decimal es: " << bin2dec(NumBinario) << endl;
                }
                break;

            case 3:
                cout << "Ingrese un número decimal: ";
                cin >> NumDecimal;
                if (cin.fail() || NumDecimal < 0) {
                    cout << "Número decimal no es válido." << endl;  // Manejo de error para datos incorrectos
                    cin.clear();
                    cin.ignore();
                } else {
                    cout << "El número hexadecimal es: " << dec2hex(NumDecimal) << endl;
                }
                break;

            case 4:
                cout << "Ingrese un número hexadecimal: ";
                cin >> NumHexadecimal;
                if (cin.fail()) {
                    cout << "Número hexadecimal no válido." << endl;  // Manejo de error para datos incorrectos
                    cin.clear();
                    cin.ignore();
                } else {
                    cout << hex2dec(NumHexadecimal) << endl;
                }
                break;

            default:
                if (EleccionMenu != 5) {
                    cout << "Opción no válida. Intente nuevamente." << endl;
                }
                break;
        }
    } while (EleccionMenu != 5); //Salida y finalización del código
    cout << "Gracias por utilizar el programa." << endl;

    return 0;
}
