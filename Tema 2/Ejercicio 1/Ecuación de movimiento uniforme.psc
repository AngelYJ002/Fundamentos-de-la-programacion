Algoritmo Movimiento_Acelerado
	// Declaramos las variables que utilizaremos
	// Todas son reales porque pueden contener decimales
	Definir s, s0, v0, a, t Como Real
	// Mostramos el titulo del programa
	Escribir '======================================'
	Escribir ' MOVIMIENTO UNIFORMEMENTE ACELERADO'
	Escribir '======================================'
	// Solicitamos la posicion inicial del objeto
	Escribir 'Ingrese la posicion inicial (m):'
	Leer s0
	// Solicitamos la velocidad inicial del objeto
	Escribir 'Ingrese la velocidad inicial (m/s):'
	Leer v0
	// Solicitamos la aceleracion del movimiento
	Escribir 'Ingrese la aceleracion (m/s2):'
	Leer a
	// Solicitamos el tiempo transcurrido
	Escribir 'Ingrese el tiempo transcurrido (s):'
	Leer t
	// Calculamos la posicion final del objeto
	// Aplicamos la formula del movimiento uniformemente acelerado
	// s = s0 + v0*t + (1/2)*a*t^2
	s <- s0+v0*t+0.5*a*t^2
	// Mostramos los datos ingresados por el usuario
	Escribir ''
	Escribir '========== RESULTADOS =========='
	Escribir 'Posicion inicial: ', s0, ' metros'
	Escribir 'Velocidad inicial: ', v0, ' m/s'
	Escribir 'Aceleracion: ', a, ' m/s2'
	Escribir 'Tiempo transcurrido: ', t, ' segundos'
	// Mostramos la posicion final calculada
	Escribir '--------------------------------'
	Escribir 'Posicion final: ', s, ' metros'
	// Calculamos y mostramos el desplazamiento
	// Restamos la posicion inicial a la posicion final
	Escribir 'Desplazamiento: ', s-s0, ' metros'
	Escribir '================================'
	// Presentamos una explicacion del resultado obtenido
	Escribir ''
	Escribir 'El objeto partio de la posicion ', s0, ' metros.'
	Escribir 'Despues de ', t, ' segundos, alcanzo'
	Escribir 'la posicion de ', s, ' metros.'
FinAlgoritmo
