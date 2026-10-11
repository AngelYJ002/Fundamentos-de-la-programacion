/************************************************************
Nombre del programa: Volumen de La Tierra
Elaboro: Miguel Angel Papalotzi Mendieta
Fecha: 10/10/2026
Descripcion:
Programa que calcula el volumen aproximado de
la Tierra considerando que es un esferoide.
************************************************************/

Algoritmo VolumenDeLaTierra
	// Declaramos las variables de tipo Real
	// Permiten almacenar numeros con decimales
	Definir a, b, p1, V Como Real
	// Mostramos el titulo del programa
	Escribir '========================================'
	Escribir ' CALCULO DEL VOLUMEN DE LA TIERRA'
	Escribir '========================================'
	// Asignamos el valor del radio ecuatorial
	// El valor se encuentra expresado en kilometros
	a <- 6378.137
	// Asignamos el valor del radio polar
	// El valor se encuentra expresado en kilometros
	b <- 6356.752
	// Asignamos el valor de la constante PI
	p1 <- 3.141592653589793
	// Calculamos el volumen de la Tierra
	// Formula: V = (4/3) * pi * a^2 * b
	// El simbolo ^ representa una potencia
	V <- (4/3)*p1*a^2*b
	// Mostramos los valores utilizados
	Escribir ''
	Escribir '========== DATOS UTILIZADOS =========='
	Escribir 'Radio ecuatorial: ', a, ' km'
	Escribir 'Radio polar: ', b, ' km'
	Escribir 'Constante PI: ', pi
	// Mostramos el resultado calculado
	Escribir ''
	Escribir '========== RESULTADOS =========='
	Escribir 'Volumen de la Tierra: ', V, ' km3'
	// Presentamos una explicacion del resultado
	Escribir ''
	Escribir 'El volumen aproximado de la Tierra'
	Escribir 'se calculo considerando su forma'
	Escribir 'de esferoide y utilizando sus radios'
	Escribir 'ecuatorial y polar.'
FinAlgoritmo
