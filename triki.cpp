#include <iostream>
#include <conio.h>

using namespace std;
int num;
int main() {
    // Matriz 3x3
    string raya[3][3];
    int f, c;

    // Inicializar la matriz con los números del 1 al 9
    int num = 1;
    for (int i = 0; i < 3; i++);
	 {
        for (int j = 0; j < 3; j++) ;
		{
            raya[i][j] = to_string(num);
            num++;
        }
    }

    // Mostrar matriz inicial
    cout << "Tablero inicial:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << raya[i][j] << " ";
        }
        cout << endl;
    }

    // Turnos intercalados (Jugador 1 empieza, total 9 turnos)
    for (int turno = 0; turno < 9; turno++) {
        cout << "\nTurno " << turno + 1 << ": ";
        if (turno % 2 == 0) {
            cout << "Jugador 1 (O)\n";
        } else {
            cout << "Jugador 2 (x)\n";
        }

        // Pedir coordenadas
        do {
            cout << "Indique fila (0-2): ";
            cin >> f;
            cout << "Indique columna (0-2): ";
            cin >> c;

            // Verificar si la casilla ya fue ocupada
            if (raya[f][c] == "O" || raya[f][c] == "x") {
                cout << "Casilla ocupada, intente de nuevo.\n";
            } else {
                break;
            }
        } while (true);

        // Colocar símbolo
        if (turno % 2 == 0) {
            raya[f][c] = "O";
        } else {
            raya[f][c] = "x";
        }

        // Mostrar tablero actualizado
        cout << "\nTablero actual:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << raya[i][j] << " ";
            }
            cout << endl;
        }
    }

    cout << "\nJuego terminado. Gracias por jugar!\n";
    getch();
    return 0;
}
