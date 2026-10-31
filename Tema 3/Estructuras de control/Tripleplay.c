/************************************************************
Nombre del programa: Servicio Tripleplay
Elaboro: Miguel Angel Papalotzi Mendieta
Fecha: 31/10/2026
************************************************************/
#include <stdio.h>

int main() {
    // Precios de los servicios
    const float PRECIO_INTERNET = 200.00;
    const float PRECIO_TELEFONIA = 100.00;
    const float PRECIO_STREAMING = 500.00;

    // Variables para selección de servicios y tipo de cliente
    int internet, telefonia, streaming;
    int tipoCliente;
    float costoTotal = 0.0, descuento = 0.0;

    // Bienvenida al usuario
    printf("--- CONTRATACION DE SERVICIO TRIPLE PLAY ---\n");
    printf("Seleccione los servicios que desea contratar:\n");

    // Selección de servicios
    printf("Desea contratar Internet (1 = Si, 0 = No): ");
    scanf_s("%d", &internet);
    printf("Desea contratar Telefonía (1 = Si, 0 = No): ");
    scanf_s("%d", &telefonia);
    printf("Desea contratar Streaming (1 = Si, 0 = No): ");
    scanf_s("%d", &streaming);

    /*
    Requerimiento 1:
    Se utiliza la estructura de control if porque cada servicio se elige
    de manera independiente. De esta forma, únicamente se suma al costo
    total el precio de los servicios que el cliente seleccionó.
    */
    if (internet == 1) {
        costoTotal += PRECIO_INTERNET;
    }

    if (telefonia == 1) {
        costoTotal += PRECIO_TELEFONIA;
    }

    if (streaming == 1) {
        costoTotal += PRECIO_STREAMING;
    }

    // Verificación de tipo de cliente 
    printf("Es un cliente nuevo o existente (1 = Nuevo, 2 = Existente): ");
    scanf_s("%d", &tipoCliente);
    /*
    Requerimiento 2:
    Se usa if / else if porque un cliente solo puede pertenecer a un tipo:
    nuevo o existente. Así se aplica únicamente el descuento correspondiente.
    */
    if (tipoCliente == 1) {
        descuento = costoTotal * 0.10; // 10% de descuento para nuevos clientes
    }
    else if (tipoCliente == 2) {
        descuento = costoTotal * 0.05; // 5% de descuento para clientes existentes
    }
    else {
        printf("Tipo de cliente no válido. No se aplicará descuento.\n");
    }

    // Se resta el descuento calculado para obtener el costo final. Cálculo final del costo después del descuento
    costoTotal -= descuento;

    // Mostrar el total a pagar
    printf("\n--- RESUMEN DE LA CONTRATACION ---\n");
    printf("Costo total antes del descuento: $%.2f\n", costoTotal + descuento);
    printf("Descuento aplicado: $%.2f\n", descuento);
    printf("Total a pagar: $%.2f\n", costoTotal);

    return 0;
}
