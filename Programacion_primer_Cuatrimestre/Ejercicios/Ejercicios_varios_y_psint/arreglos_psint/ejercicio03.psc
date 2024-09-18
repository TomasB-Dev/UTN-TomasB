Algoritmo ejercicio03
	Definir  invitados como caracter
	definir i, ni Como Entero
	repetir
		Escribir "Escrbir el numero de invitados"
		leer ni
	Mientras Que  ni <= 0
	Dimension  invitados[ni]
	para i=0 Hasta ni-1 Hacer
		Escribir "ingrese el nombre del invitado"
		leer invitados[i]
	FinPara
	Para i=0 Hasta ni-1 Hacer
		Escribir invitados[i]
	FinPara
//Escriba un algoritmo donde se le pida al usuario que ingrese la cantidad de personas invitadas a un evento, luego pedir que ingrese
//los nombres de la misma. Al finalizar la carga mostrar al usuario la lista de invitados.
FinAlgoritmo
