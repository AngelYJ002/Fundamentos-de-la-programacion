/*******************************************************************
Nombre:			Miguel Angel Papalotzi Mendieta
Matricula:		2607006
Fecha:			07/10/2026
Descripción:	Programa que calcula la posicion final de un objeto
                mediante la formula del movimiento uniformemente
                acelerado.
********************************************************************/

#include <stdio.h>

// Funcion principal donde comienza la ejecucion
int main() {

    // Declaramos las variables de tipo flotante
    // para permitir valores con decimales
    float s, s0, v0, a, t;
    float desplazamiento;

    // Mostramos el titulo del programa
    printf("======================================\n");
    printf(" MOVIMIENTO UNIFORMEMENTE ACELERADO\n");
    printf("======================================\n");
    // El "\n" indica un salto de linea

    // Solicitamos la posicion inicial del objeto
    printf("Ingrese la posicion inicial (m): ");
    scanf_s("%f", &s0);
    // El comando "scanf_s" lee desde el teclado un numero flotante "f" y lo guarda en la variable en este caso "s0"
    // El "%f" le indica al programa el tipo de dato que tiene que leer
    // El "&s0" le dice al programa en donde tiene que guardar el dato que recibe despues de la lectura

    // Solicitamos la velocidad inicial
    printf("Ingrese la velocidad inicial (m/s): ");
    scanf_s("%f", &v0);

    // Solicitamos la aceleracion del objeto
    printf("Ingrese la aceleracion (m/s2): ");
    scanf_s("%f", &a);

    // Solicitamos el tiempo transcurrido
    printf("Ingrese el tiempo transcurrido (s): ");
    scanf_s("%f", &t);

    // Calculamos la posicion final del objeto
    // Formula: s = s0 + v0*t + 0.5*a*t^2
    s = s0 + v0 * t + 0.5f * a * t * t;

    // Calculamos el desplazamiento realizado
    // Restamos la posicion inicial a la final
    desplazamiento = s - s0;

    // Mostramos los datos ingresados
    printf("\n========== RESULTADOS ==========\n");
    printf("Posicion inicial: %.2f metros\n", s0);
    printf("Velocidad inicial: %.2f m/s\n", v0);
    printf("Aceleracion: %.2f m/s2\n", a);
    printf("Tiempo transcurrido: %.2f segundos\n", t);

    // Mostramos los resultados calculados
    printf("--------------------------------\n");
    printf("Posicion final: %.2f metros\n", s);
    printf("Desplazamiento: %.2f metros\n", desplazamiento);
    printf("================================\n");

    // Presentamos una explicacion del resultado
    printf("\nEl objeto partio de la posicion %.2f metros.\n", s0);
    printf("Despues de %.2f segundos, alcanzo\n", t);
    printf("la posicion de %.2f metros.\n", s);

    // Finalizamos correctamente el programa
    return 0;
}