#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>

using namespace std;


void cambiarColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main() {
    int opc, tam = 2;
    string productos[tam];
    string codigo[tam];
    float precio[tam];

    do {
        system("cls");
        cambiarColor(6); 
        cout << "ALMACEN DE CADENA" << endl;
        cout << "1. Capturar productos" << endl;
        cout << "2. Reporte de productos " << endl;
        cout << "3. busqueda" << endl;
        cout << "4. editar producto"<<endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione opcion de menu: ";
        cin >> opc;

        switch (opc) {
        case 1: {
            system("cls");
            cambiarColor(10); 
            cout << "MODULO DE CAPTURA DE PRODUCTOS\n" << endl;
            for (int n = 0; n < tam; n++) {
                cout << "Producto # " << (n + 1) << endl;
                cout << "Referencia producto: ";
                cin >> codigo[n];
                cout << "Nombre del producto: ";
                cin >> productos[n];
                cout << "Precio del producto $: ";
                cin >> precio[n];
                cout << endl;
            }
            cambiarColor(7); 
            system("pause");
            break;
        }

        case 2: {
            system("cls");
            cambiarColor(9);
            cout << "================ TICKET DE COMPRA ================\n";
            cout << left << setw(15) << "CODIGO"
                 << setw(20) << "PRODUCTO"
                 << right << setw(10) << "PRECIO" << endl;
            cout << "--------------------------------------------------\n";

            float total = 0;
            for (int n = 0; n < tam; n++) {
                cout << left << setw(15) << codigo[n]
                     << setw(20) << productos[n]
                     << right << "$" << fixed << setprecision(2) << setw(9) << precio[n] << endl;
                total += precio[n];
            }

            cout << "--------------------------------------------------\n";
            cambiarColor(14);
            cout << right << setw(36) << "TOTAL: $" << fixed << setprecision(2) << total << endl;
            cambiarColor(7);
            cout << "==================================================\n";
            system("pause");
            break;
        }

        
            case 3: {
    system("cls");
    cambiarColor(12); 
    cout << "BUSCAR PRODUCTO POR REFERENCIA" << endl;

    string refBuscada;
    bool encontrado = false;

    cout << "Ingrese la referencia del producto a buscar: ";
    cin >> refBuscada;

    for (int i = 0; i < tam; i++) {
        if (codigo[i] == refBuscada) {
            cout << "\nProducto encontrado:\n";
            cout << "Referencia: " << codigo[i] << endl;
            cout << "Nombre: " << productos[i] << endl;
            cout << "Precio: $" << fixed << setprecision(2) << precio[i] << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Producto con esa referencia no encontrado."<<endl;
    }

    cambiarColor(7); 
    system("pause");
    break;
}


        case 4: {
    system("cls");
    cambiarColor(13); 
    cout << "EDITAR PRODUCTO POR REFERENCIA"<<endl;

    string refEditar;
    bool encontrado = false;

    cout << "Ingrese la referencia del producto a editar: "<<endl;
    cin >> refEditar;

    for (int i = 0; i < tam; i++) {
        if (codigo[i] == refEditar) {
            cout << "Producto actual:"<<endl;
            cout << "Referencia: " << codigo[i] <<endl;
            cout << "Nombre: " << productos[i] <<endl;
            cout << "Precio: $" << fixed << setprecision(2) << precio[i] <<endl;

            cout << "Ingrese el nuevo nombre del producto: "<<endl;
            cin >> productos[i];
            cout << "Ingrese el nuevo precio del producto: "<<endl;
            cin >> precio[i];

            cout << "Producto actualizado correctamente."<<endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Producto con esa referencia no encontrado."<<endl;
    }

    cambiarColor(7);
    system("pause");
    break;
}

    case 5:
            system("cls");
            cambiarColor(14); 
            cout << "SALIR" << endl;
            cambiarColor(7);
            system("pause");
            break;


        default:
            system("cls");
            cambiarColor(4); 
            cout << "OPCION NO VALIDA" << endl;
            cambiarColor(7);
            system("pause");
            break;
        }

    } while (opc != 5);

    getch();
    return 0;
}

