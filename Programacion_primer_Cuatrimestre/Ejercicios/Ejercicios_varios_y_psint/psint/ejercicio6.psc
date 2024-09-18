Algoritmo ejercicio6
    // 6. Realice un algoritmo que lea N elementos y que imprima el número que se repite más veces dentro del arreglo
    definir n, nro, numeros, i, aux, maxrepeticiones, repeticionActual Como Entero
    leer n
    dimension nro[n]
    repetido = 0
	
    para i <- 0 hasta n-1 Hacer
        leer nro[i]
    FinPara
	repetido = 0
    aux = nro[0]
	
    Para i <- 0 Hasta n-1 Hacer
        repeticionActual = 0
        Para j <- 0 Hasta n-1 Hacer
            Si nro[i] = nro[j] Entonces
                repeticionActual = repeticionActual + 1
            FinSi
        FinPara
		
        Si repeticionActual > repetido Entonces
            repetido = repeticionActual
            aux = nro[i]
        FinSi
    FinPara
	
    Escribir "El número que más se repite es: ", aux
    Escribir "Se repite ", repetido, " veces."
	
FinAlgoritmo