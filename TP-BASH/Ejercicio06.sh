#!/bin/bash
echo Ingrese un numero
read numero

if [[ $((numero % 2)) -eq 0 ]];
then
echo el numero es par
else
echo el numero es impar
fi
