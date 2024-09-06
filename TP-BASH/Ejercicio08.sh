#!/bin/bash
echo Ingrese el primer numero
read numero1
echo Ingrese el segundo numero
read numero2

if [[ $numero1 -lt $numero2 ]];
then
echo $numero2 es mayor y $numero1 es menor
else
echo $numero1 es mayor y $numero2 es menor
fi
