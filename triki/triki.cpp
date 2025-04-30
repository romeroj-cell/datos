#include <iostream>
#include <conio.h>
#include <stdio.h> // Para sprintf

using namespace std;

// Verifica si hay ganador
string verificarGanador(string raya[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (raya[i][0] == raya[i][1] && raya[i][1] == raya[i][2])
            return raya[i][0]; // Fila
        if (raya[0][i] == raya[1][i] && raya[1][i] == raya[2][i])
            return raya[0][i]; // Columna
    }
    if (raya[0][0] == raya[1][1] && raya[1][1] == raya[2][2])
        return raya[0][0]; // Diagonal \
    if (raya[0][2] == raya[1][1] && raya[1][1] == raya[2][0])
        return raya[0][2]; // Diagonal /
    return "";
}

int main() {
    string raya[3][3];
    int f, c;
    int turno = 0;
    char texto[2];
    int num = 1;

    // Inicializar tablero con números del 1 al 9
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sprintf(texto, "%d", num++);
            raya[i][j] = texto;
        }
    }

    // Mostrar tablero inicial
    cout << "Tablero inicial:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << raya[i][j] << " ";
        cout << endl;
    }

    // Bucle de juego - 9 turnos
    while (turno < 9) {
        cout << "\nTurno " << turno + 1 << ":\n";

        string jugador = (turno % 2 == 0) ? "Jugador 1 (O)" : "Jugador 2 (x)";
        string simbolo = (turno % 2 == 0) ? "O" : "x";
        cout << jugador << endl;

        // Validar casilla libre
        do {
            cout << "Indique fila (0-2): ";
            cin >> f;
            cout << "Indique columna (0-2): ";
            cin >> c;

            if (f < 0 || f > 2 || c < 0 || c > 2) {
                cout << "Posición fuera de rango.\n";
            } else if (raya[f][c] == "O" || raya[f][c] == "x") {
                cout << "Casilla ocupada, intente otra.\n";
            } else {
                break;
            }
        } while (true);

        // Asignar jugada
        raya[f][c] = simbolo;

        // Mostrar tablero actualizado
        cout << "\nTablero:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cout << raya[i][j] << " ";
            cout << endl;
        }

        // Verificar ganador
        string ganador = verificarGanador(raya);
        if (ganador == "O") {
            cout << "\n¡Jugador 1 ha ganado!\n";
            break;
        } else if (ganador == "x") {
            cout << "\n¡Jugador 2 ha ganado!\n";
            break;
        }

        turno++;
    }

    if (turno == 9) {
        cout << "\nEmpate. No hay ganador.\n";
    }

    getch();
    return 0;
}

