#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h> // Para los colores

using namespace std;

// Función para cambiar color del texto
void cambiarColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Verifica si hay ganador
string verificarGanador(string raya[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (raya[i][0] == raya[i][1] && raya[i][1] == raya[i][2])
            return raya[i][0];
        if (raya[0][i] == raya[1][i] && raya[1][i] == raya[2][i])
            return raya[0][i];
    }
    if (raya[0][0] == raya[1][1] && raya[1][1] == raya[2][2])
        return raya[0][0];
    if (raya[0][2] == raya[1][1] && raya[1][1] == raya[2][0])
        return raya[0][2];
    return "";
}

int main() {
    string raya[3][3];
    int f, c;
    int turno = 0;
    char texto[2];
    int num = 1;

    // Inicializar tablero
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            sprintf(texto, "%d", num++);
            raya[i][j] = texto;
        }

    // Mostrar tablero inicial
    cout << "Tablero inicial:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << raya[i][j] << " ";
        cout << endl;
    }

    // Turnos del juego
    while (turno < 9) {
        cout << "\nTurno " << turno + 1 << ":\n";

        string jugador = (turno % 2 == 0) ? "Jugador 1 (O)" : "Jugador 2 (x)";
        string simbolo = (turno % 2 == 0) ? "O" : "x";
        cambiarColor(15); // Blanco
        cout << jugador << endl;

        // Validar jugada
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

        // Mostrar tablero con colores
        cout << "\nTablero:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (raya[i][j] == "O") {
                    cambiarColor(10); // Verde
                } else if (raya[i][j] == "x") {
                    cambiarColor(9); // Azul
                } else {
                    cambiarColor(15); // Blanco
                }
                cout << raya[i][j] << " ";
            }
            cout << endl;
        }

        // Verificar ganador
        string ganador = verificarGanador(raya);
        if (ganador == "O") {
            cambiarColor(10);
            cout << "\n¡Jugador 1 ha ganado!\n";
            break;
        } else if (ganador == "x") {
            cambiarColor(9);
            cout << "\n¡Jugador 2 ha ganado!\n";
            break;
        }

        turno++;
    }

    if (turno == 9) {
        cambiarColor(15);
        cout << "\nEmpate. No hay ganador.\n";
    }

    cambiarColor(15); // Restaurar color blanco
    getch();
    return 0;
}

