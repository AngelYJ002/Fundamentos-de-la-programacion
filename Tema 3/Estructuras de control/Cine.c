
/************************************************************
Nombre del programa: Función de cine
Elaboro: Miguel Angel Papalotzi Mendieta
Grupo: B
Fecha: 1/11/2026
************************************************************/

// Usamos la libreria stdio.h para poder usar printf y scanf
#include <stdio.h>

// Usamos la libreria locale.h para poder usar tildes y ñ
#include <locale.h>

int main() {
	// Usamos setlocale para poder usar tildes y ñ y el formato UTF-8 para que se vea correctamente en la consola
    setlocale(LC_ALL, ".UTF-8");

    // Declaracion de variables usando int para enteros
    // y float para decimales
    int funcion, horario, cantidadAsientos, tipoBoleto, tipoSala;
    int asiento, pago;

    // Los precios pueden ser decimales, por eso se usan float
    float precio = 0;
    float total = 0;

    // Este ciclo permite iniciar una compra nueva
    // si el usuario cancela antes de realizar el pago
    do {

        // Reiniciamos el total al comenzar una compra
        total = 0;

        // Desplegamos el menu de bienvenida y la cartelera
        do {
            printf("\n--- BIENVENIDO A CINETOON ---\n");
            printf("---------CARTELERA:----------\n");
            printf("1. La Durmiente Bella\n");
            printf("2. Las botas de un Gato\n");
            printf("3. Muerte Sangrienta\n");
            printf("4. La vida de un perro\n");
            printf("Seleccione la funcion que desea ver (1-4): ");

            // Leemos la opcion seleccionada y la guardamos en la variable funcion
            if (scanf_s("%d", &funcion) != 1) {
                printf("Debes ingresar un número.\n");
                return 1;
            }

			// Separamos la seccion con una linea para darle mejor presentacion
            printf("===============================\n");

			// Usamos switch para determinar la pelicula seleccionada y mostrar un mensaje de confirmacion
            switch (funcion) {

            case 1:
                printf("------CINETOON------\n");
                printf("---Seleccionaste---\n");
                printf("'La Durmiente Bella'\n");
                break;

            case 2:
                printf("------CINETOON------\n");
                printf("---Seleccionaste---\n");
                printf("'Las botas de un Gato'\n");
                break;

            case 3:
                printf("------CINETOON------\n");
                printf("---Seleccionaste---\n");
                printf("'Muerte Sangrienta'\n");
                break;

            case 4:
                printf("------CINETOON------\n");
                printf("---Seleccionaste---\n");
                printf("'La vida de un perro'\n");
                break;

                // Si la opcion no es valida mostramos un error
            default:
                printf("------------CINETOON------------\n");
                printf("-----------LO SENTIMOS-----------\n");
                printf("No seleccionaste una opción válida\n");
                break;
            }
        } while (funcion < 1 || funcion > 4);

        // Separamos la seccion de peliculas y salas
        printf("===============================\n");

        // Desplegamos el menu de seleccion de sala
        do {
            printf("------CINETOON------\n");
            printf("-¿QUÉ SALA PREFIERE?-\n");

            // Desplegamos los precios de la sala normal
            printf("---1. Sala normal---\n");
            printf("Adulto: $80.00\n");
            printf("Niño: $50.00\n");

            // Desplegamos los precios de la sala VIP
            printf("----2. Sala VIP-----\n");
            printf("Adulto: $120.00\n");
            printf("Niño: $80.00\n");

			// separamos la seccion con una linea para darle mejor presentacion
            printf("===============================\n");

			// Solicitamos la sala y la guardamos en la variable tipoSala
            printf("Seleccione la sala que desea (1-2): ");

            if (scanf_s("%d", &tipoSala) != 1) {
                printf("Debes ingresar un número.\n");
                return 1;
            }

			// Separamos la seccion con una linea para darle mejor presentacion
            printf("===============================\n");

            // Usamos if para determinar la sala elegida
            if (tipoSala == 1) {
                printf("Has seleccionado la sala normal\n");
            }

            // Comprobamos si selecciono la sala VIP
            else if (tipoSala == 2) {
                printf("Has seleccionado la sala VIP\n");
            }

            // Si no existe esa sala mostramos un error
            else {
                printf("Lo sentimos, no contamos con esa sala\n");
            }

		// while para repetir el menu de seleccion de sala hasta que el usuario seleccione una opcion valida
        } while (tipoSala < 1 || tipoSala > 2);

		// Desplegamos el menu de seleccion de horarios
        printf("===============================\n");
        printf("------------CINETOON-----------\n");
        printf("------Horarios disponibles------\n");
        printf("--------------------------------\n");

        // Cada pelicula tiene sus propios horarios
        switch (funcion) {

        case 1:
            printf("La Durmiente Bella\n");
            printf("1. 10:00 AM\n");
            printf("2. 1:00 PM\n");
            printf("3. 4:00 PM\n");
            break;

        case 2:
            printf("Las botas de un Gato\n");
            printf("1. 11:00 AM\n");
            printf("2. 2:00 PM\n");
            printf("3. 5:00 PM\n");
            break;

        case 3:
            printf("Muerte Sangrienta\n");
            printf("1. 4:00 PM\n");
            printf("2. 7:00 PM\n");
            printf("3. 10:00 PM\n");
            break;

        case 4:
            printf("La vida de un perro\n");
            printf("1. 1:00 PM\n");
            printf("2. 4:00 PM\n");
            printf("3. 7:00 PM\n");
            break;
        }

		// Le pedimos al usuario que seleccione un horario y lo guardamos en la variable horario
        do {
            printf("Seleccione el horario que desea (1-3): ");
			// Validamos que el usuario ingrese un numero y que este dentro del rango de horarios disponibles, usamos ! para negar la condicion y repetir el ciclo si no es valido
            if (scanf_s("%d", &horario) != 1) {
                printf("Debes ingresar un número.\n");
                return 1;
            }
			// Nos aseguramos de que el horario seleccionado sea valido, si no lo es mostramos un mensaje de error
            if (horario < 1 || horario > 3) {
                printf("No contamos con ese horario.\n");
            }
		// while para repetir el menu de seleccion de horarios hasta que el usuario seleccione una opcion valida
        } while (horario < 1 || horario > 3);

		// Mostramos un mensaje de confirmacion del horario seleccionado
        printf("Horario seleccionado correctamente.\n");

		// Desplegamos el menu de seleccion de asientos
        printf("===============================\n");
        printf("------------CINETOON-----------\n");
        printf("------SELECCIÓN DE ASIENTOS-----\n");

		// Solicitamos la cantidad de asientos con un maximo de 4 y un minimo de 1, usamos do while para repetir el menu hasta que el usuario seleccione una opcion valida
        do {
            printf("¿Cuántos asientos desea? (1-4): ");

			// Validamos que el usuario ingrese un numero y que este dentro del rango de asientos disponibles, usamos ! para negar la condicion y repetir el ciclo si no es valido
            if (scanf_s("%d", &cantidadAsientos) != 1) {
                printf("Debes ingresar un número.\n");
                return 1;
            }

			// Nos aseguramos de que la cantidad de asientos seleccionada sea valida, si no lo es mostramos un mensaje de error
            if (cantidadAsientos < 1 || cantidadAsientos > 4) {
                printf("Solo puede seleccionar de 1 a 4 asientos.\n");
            }
		// while para repetir el menu de seleccion de asientos hasta que el usuario seleccione una opcion valida
        } while (cantidadAsientos < 1 || cantidadAsientos > 4);

		// Separamos la seccion con una linea para darle mejor presentacion
        printf("===============================\n");

		// Consultamos el tipo de asiento para cada boleto seleccionado, usamos un ciclo for para preguntar por cada asiento
        for (asiento = 1; asiento <= cantidadAsientos; asiento++) {

            printf("\n------ASIENTO %d------\n", asiento);
            printf("1. Adulto\n");
            printf("2. Niño\n");

            // Preguntamos si el boleto es de niño o adulto
            do {
                printf("Seleccione el tipo de boleto (1-2): ");

				// Validamos que el usuario ingrese un numero y que este dentro del rango de tipos de boleto disponibles, usamos ! para negar la condicion y repetir el ciclo si no es valido
                if (scanf_s("%d", &tipoBoleto) != 1) {
                    printf("Debes ingresar un número.\n");
                    return 1;
                }

				// Nos aseguramos de que el tipo de boleto seleccionado sea valido, si no lo es mostramos un mensaje de error
                if (tipoBoleto < 1 || tipoBoleto > 2) {
                    printf("Tipo de boleto no válido.\n");
                }

            } while (tipoBoleto < 1 || tipoBoleto > 2);

			// Determinamos el precio de acuerdo con lo que el usuario selecciono, usamos if para determinar el tipo de sala y el tipo de boleto y asignar el precio correspondiente
            if (tipoSala == 1) {

				// Precios de sala normal, si el tipo de boleto es 1 (adulto) el precio es 80, si es 2 (niño) el precio es 50
                if (tipoBoleto == 1) {
                    precio = 80;
                }
                else {
                    precio = 50;
                }
            }

            else if (tipoSala == 2) {

				// Precios de sala VIP, si el tipo de boleto es 1 (adulto) el precio es 120, si es 2 (niño) el precio es 80
                if (tipoBoleto == 1) {
                    precio = 120;
                }
                else {
                    precio = 80;
                }
            }

            // Sumamos el precio del boleto al total
            total = total + precio;

            printf("Precio del boleto: $%.2f\n", precio);
        }

		// Desplegamos el resumen de la compra, mostrando la cantidad de boletos, el tipo de sala y el total a pagar
        printf("\n===============================\n");
        printf("------------CINETOON-----------\n");
        printf("--------RESUMEN DE COMPRA------\n");

        printf("Cantidad de boletos: %d\n", cantidadAsientos);

        // Mostramos la sala elegida
        if (tipoSala == 1) {
            printf("Tipo de sala: Normal\n");
        }
        else {
            printf("Tipo de sala: VIP\n");
        }

        // Mostramos el monto total de la compra
        printf("TOTAL A PAGAR: $%.2f\n", total);
        printf("===============================\n");

        // CONFIRMACION DEL PAGO
        printf("¿Desea realizar el pago?\n");
        printf("1. Confirmar pago\n");
        printf("2. Cancelar y realizar una nueva selección\n");

        // Solicitamos una opcion valida
        do {
            printf("Seleccione una opción (1-2): ");

			// Validamos que el usuario ingrese un numero y que este dentro del rango de opciones disponibles, usamos ! para negar la condicion y repetir el ciclo si no es valido
            if (scanf_s("%d", &pago) != 1) {
                printf("Debes ingresar un número.\n");
                return 1;
            }

			// Nos aseguramos de que la opcion seleccionada sea valida, si no lo es mostramos un mensaje de error
            if (pago < 1 || pago > 2) {
                printf("Opción no válida. Intente nuevamente.\n");
            }

        } while (pago < 1 || pago > 2);

        // Si cancela, el programa vuelve al menu principal
        if (pago == 2) {
            printf("\nCompra cancelada.\n");
            printf("Puede realizar una nueva selección.\n");
        }

    } while (pago == 2);

    // Si el usuario confirma el pago mostramos el monto final
    printf("\n===============================\n");
    printf("------------CINETOON-----------\n");
    printf("--------PAGO REALIZADO---------\n");
    printf("Total de la compra: $%.2f\n", total);
    printf("¡Gracias por su compra!\n");
    printf("Disfrute su función.\n");
	printf("¡Hasta pronto!\n");
    printf("===============================\n");
	printf("No olvide pasar al area de dulces!\n");

    // Finalizamos el programa
    return 0;
}
