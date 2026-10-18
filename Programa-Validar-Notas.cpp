
#include <iostream> // Permite utilizar cout y cin
using namespace std;

int main() {

    // Declaramos una variable para guardar la nota del estudiante
    float nota;

    // Variable que permite decidir si se continua evaluando
    // Se inicializa en 's' para iniciar el programa
    char opcion = 's';

    // Ciclo principal: se repite mientras la respuesta sea s o S
    while (opcion == 's' || opcion == 'S') {

        // Solicitamos la nota del estudiante
        cout << "Ingrese la nota del estudiante (0-5): ";
        cin >> nota;

        // Validamos que la nota se encuentre entre 0 y 5
        // Si esta fuera del rango, solicitamos otra nota
        while (nota < 0 || nota > 5) {
            cout << "Nota no valida. Ingrese una nota entre 0 y 5: ";
            cin >> nota;
        }

        // Mostramos el encabezado del resultado academico
        cout << endl;
        cout << "====================================" << endl;
        cout << "       RESULTADO ACADEMICO" << endl;
        cout << "====================================" << endl;

        // Mostramos la nota ingresada
        cout << endl;
        cout << "Nota: " << nota << endl;

        // Si la nota es mayor o igual a 3.0, el estudiante aprueba
        if (nota >= 3.0) {
            cout << "Estado: Aprobado" << endl;
        }
        // Si la nota es menor que 3.0, debe reforzar sus conocimientos
        else {
            cout << "Estado: Debe reforzar sus conocimientos" << endl;
        }

        // Preguntamos si el usuario desea evaluar a otro estudiante
        cout << endl;
        cout << "Desea seguir evaluando? (s/n): ";
        cin >> opcion;

        // Dejamos una linea en blanco antes de repetir o finalizar
        cout << endl;
    }

    // Este mensaje aparece cuando el usuario decide no continuar
    cout << "====================================" << endl;
    cout << "   FIN DE LAS EVALUACIONES" << endl;
    cout << "====================================" << endl;

    // Finalizamos el programa correctamente
    return 0;
}
