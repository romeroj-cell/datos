#include <iostream>
#include <conio.h>

using namespace std;

// Función que verifica si hay un ganador
string verificarGanador(string raya[3][3]) {
    // Revisar filas
    for (int i = 0; i < 3; i++) {
        if (raya[i][0] == raya[i][1] && raya[i][1] == raya[i][2]) {
            return raya[i][0];
        }
    }

    // Revisar columnas
    for (int j = 0; j < 3; j++) {
        if (raya[0][j] == raya[1][j] && raya[1][j] == raya[2][j]) {
            return raya[0][j];
        }
    }

    // Revisar diagonales
    if (raya[0][0] == raya[1][1] && raya[1][1] == raya[2][2]) {
        return raya[0][0];
    }

    if (raya[0][2] == raya[1][1] && raya[1][1] == raya[2][0]) {
        return raya[0][2];
    }

    return ""; // No hay ganador aún
}

int main() {
    string raya[3][3];
    int f, c;

    // Inicializar tablero con números del 1 al 9
    int num = 1;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            raya[i][j] = to_string(num++);

    // Mostrar tablero inicial
    cout << "Tablero inicial:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << raya[i][j] << " ";
        cout << endl;
    }

    // 9 turnos (Jugador 1 = O empieza)
    for (int turno = 0; turno < 9; turno++) {
        cout << "\nTurno " << turno + 1 << ": ";
        string jugador = (turno % 2 == 0) ? "Jugador 1 (O)" : "Jugador 2 (x)";
        string simbolo = (turno % 2 == 0) ? "O" : "x";
        cout << jugador << endl;

        // Validar casilla libre
        do {
            cout << "Indique fila (0-2): ";
            cin >> f;
            cout << "Indique columna (0-2): ";
            cin >> c;

            if (raya[f][c] == "O" || raya[f][c] == "x") {
                cout << "Casilla ocupada, intente otra.\n";
            } else {
                break;
            }
        } while (true);

        // Asignar símbolo
        raya[f][c] = simbolo;

        // Mostrar tablero actualizado
        cout << "\nTablero actual:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cout << raya[i][j] << " ";
            cout << endl;
        }

        // Verificar si alguien ha ganado
        string ganador = verificarGanador(raya);
        if (ganador == "O") {
            cout << "\n¡Jugador 1 ha ganado!\n";
            break;
        } else if (ganador == "x") {
            cout << "\n¡Jugador 2 ha ganado!\n";
            break;
        }
    }

    cout << "\nJuego finalizado.\n";
    getch();
    return 0;
}
