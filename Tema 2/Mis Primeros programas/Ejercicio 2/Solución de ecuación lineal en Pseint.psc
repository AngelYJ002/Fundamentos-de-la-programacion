/************************************************************
Nombre del programa: Sistema de Ecuaciones Lineales
Elaboro: Miguel Angel Papalotzi Mendieta
Fecha: 7/10/2026
Descripcion:
Programa que resuelve un sistema de dos ecuaciones
lineales con dos incognitas mediante las formulas
proporcionadas en el ejercicio.
************************************************************/

Algoritmo SistemaEcuacionesLineales
    // Declaramos las variables necesarias
    // Utilizamos reales para permitir decimales
    Definir a, b, c, d, e, f Como Real
    Definir x, i, denominador Como Real
    Escribir "SISTEMA DE ECUACIONES LINEALES"
    // Solicitamos los datos de la primera ecuacion
    Escribir "Primera ecuacion: ax + by = c"
    Escribir "Ingrese el valor de a:"
    Leer a
    Escribir "Ingrese el valor de b:"
    Leer b
    Escribir "Ingrese el valor de c:"
    Leer c
    // Solicitamos los datos de la segunda ecuacion
    Escribir "Segunda ecuacion: dx + ey = f"
    Escribir "Ingrese el valor de d:"
    Leer d
    Escribir "Ingrese el valor de e:"
    Leer e
    Escribir "Ingrese el valor de f:"
    Leer f
    // Calculamos el denominador comun
    // Formula: D = ae - bd
    denominador <- a * e - b * d
    // Verificamos que el denominador sea diferente de cero
    Si denominador <> 0 Entonces
        // Calculamos X utilizando la formula del ejercicio
        x <- (c * e - b * f) / (a * e - b * d)
        // Calculamos Y utilizando la formula del ejercicio
        i <- (a * f - c * d) / (a * e - b * d)
        // Mostramos los resultados
        Escribir "========== RESULTADOS =========="
        Escribir "Primera ecuacion: ", a, "x + (", b, ")y = ", c
        Escribir "Segunda ecuacion: ", d, "x + (", e, ")y = ", f
        Escribir "Denominador: ", denominador
        Escribir "El valor de X es: ", x
        Escribir "El valor de Y es: ", i
    SiNo
        // Evitamos realizar una division entre cero
        Escribir "El denominador es igual a cero."
        Escribir "El sistema no tiene una solucion unica."
    FinSi
FinAlgoritmo
