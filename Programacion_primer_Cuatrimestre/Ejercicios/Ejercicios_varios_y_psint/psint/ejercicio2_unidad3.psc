Algoritmo ejercicio2_unidad3
	Definir lado1, lado2, lado3 Como Real
	Escribir 'Ingrese los lados de un triángulo'
	Leer lado1, lado2, lado3
	Si lado1=lado2 Y lado2=lado3 Entonces
		Escribir 'Es un triángulo equilátero'
	SiNo
		Si lado1=lado2 O lado1=lado3 O lado2=lado3 Entonces
			Escribir 'Es un triángulo isósceles'
		SiNo
			Escribir 'Es un triángulo escaleno'
		FinSi
	FinSi
FinAlgoritmo
