Algoritmo ejercicio8bidimensional
	definir i, j Como Entero
	definir sumatotal Como Real
	definir numeros Como Real
	dimension numeros[4,3]
	sumatotal = 0
	para i=0 Hasta 3 Hacer
		para j=0 hasta 2 Hacer
			Escribir "ingrese un numero"
			leer numeros[i,j]
			sumatotal = sumatotal + numeros[i,j]
		FinPara
	FinPara
	escribir sumatotal
	
FinAlgoritmo
