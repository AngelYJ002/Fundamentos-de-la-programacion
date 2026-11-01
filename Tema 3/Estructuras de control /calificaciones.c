/************************************************************
Nombre del programa: Registro de calificaciones
Elaboro: Miguel Angel Papalotzi Mendieta
Grupo: B
Fecha: 1/11/2026
************************************************************/

// Usamos stdio.h para printf y scanf_s
#include <stdio.h>

// Usamos locale.h para mostrar correctamente acentos y caracteres especiales
#include <locale.h>

int main() {

    // Configuramos la localización para caracteres especiales
    setlocale(LC_ALL, ".UTF-8");

    // Declaramos variables enteras para controlar alumnos y ciclos
    int numAlumnos, i;

    // Declaramos variables decimales para calificaciones, suma y promedio
    float calificacion, suma = 0, promedio = 0;

	// Mostramos el nombre del programa
    printf("=========================================\n");
    printf("   SISTEMA DE REGISTRO DE CALIFICACIONES\n");
    printf("=========================================\n");

    // Pedimos el número de alumnos y validamos que sea mayor que 0
    do {
        printf("Ingrese el número de alumnos: ");
		// Validamos que la entrada sea un número entero
        if (scanf_s("%d", &numAlumnos) != 1) {
            printf("Debe ingresar un número entero.\n");
            return 1;
        }
		// Validamos que el número de alumnos sea mayor que 0
        if (numAlumnos <= 0) {
            printf("El número de alumnos debe ser mayor que 0.\n");
        }
		// Limpiamos el buffer de entrada para evitar problemas con scanf_s
    } while (numAlumnos <= 0);

	// Separamos la sección con una línea y mostramos el título de captura de calificaciones
    printf("=========================================\n");
    printf("      CAPTURA DE CALIFICACIONES\n");
    printf("=========================================\n");

    // Usamos un ciclo for para capturar la calificación de cada alumno
    for (i = 1; i <= numAlumnos; i++) {

        // Pedimos cada calificación y validamos que esté entre 0 y 100
        do {
            printf("Ingrese la calificación del alumno %d (0-100): ", i);

            // Validamos que la entrada sea un número decimal
            if (scanf_s("%f", &calificacion) != 1) {
                printf("Debe ingresar una calificación válida.\n");
                return 1;
            }
			// Validamos que la calificación esté entre 0 y 100
            if (calificacion < 0 || calificacion > 100) {
                printf("La calificación debe estar entre 0 y 100.\n");
            }

			// Limpiamos el buffer de entrada para evitar problemas con scanf_s
        } while (calificacion < 0 || calificacion > 100);

        // Acumulamos la suma de todas las calificaciones
        suma = suma + calificacion;
    }

    // Calculamos el promedio grupal
    promedio = suma / numAlumnos;

    // Mostramos la sección de resultados
    printf("=========================================\n");
    printf("         RESULTADOS DEL GRUPO\n");
    printf("=========================================\n");

    // Mostramos el número de alumnos
    printf("Número de alumnos: %d\n", numAlumnos);

    // Mostramos el promedio grupal
    printf("Promedio grupal: %.2f\n", promedio);

    // Determinamos el tipo de grupo según la cantidad de alumnos
    if (numAlumnos >= 1 && numAlumnos <= 5) {
        printf("Leyenda del grupo: GRUPO PEQUEÑO\n");
    }
	// Validamos que el número de alumnos esté entre 6 y 10 y mostramos la leyenda correspondiente
    else if (numAlumnos >= 6 && numAlumnos <= 10) {
        printf("Leyenda del grupo: GRUPO MEDIANO\n");
    }
	// Validamos que el número de alumnos esté entre 11 y 15 y mostramos la leyenda correspondiente
    else if (numAlumnos >= 11 && numAlumnos <= 15) {
        printf("Leyenda del grupo: GRUPO GRANDE\n");
    }
	// Si el número de alumnos se sale del rango válido, mostramos la leyenda de grupo inapropiado
    else {
        printf("Leyenda del grupo: GRUPO INAPROPIADO\n");
    }

	// Determinamos si el profesor es adecuado o inadecuado según el promedio de calificaciones grupal

	// Validamos que el promedio sea mayor a 70 y mostramos la leyenda correspondiente
    if (promedio > 70) {
        printf("Leyenda del profesor: PROFESOR ADECUADO\n");
		
    }
	// Validamos que el promedio sea menor a 70 y mostramos la leyenda correspondiente
    else if (promedio < 70) {
        printf("Leyenda del profesor: PROFESOR INADECUADO\n");
    }
	// Si no tenemos un promedio válido, mostramos la leyenda de profesor inapropiado
    else {
        printf("Leyenda del profesor: PROFESOR INADECUADO\n");
    }

    // Mostramos una línea final
    printf("=========================================\n");
    printf("   PROCESO FINALIZADO CORRECTAMENTE\n");
    printf("=========================================\n");

    // Finalizamos el programa
    return 0;
}
