#!/bin/bash
echo Ingrese el primer numero
read numero1
echo ingrese el segundo numero
read numero2

echo "La suma es $numero1 + $numero2 = " $(( numero1 + numero2))
echo "La resta es $numero1 - $numero2 = " $(( numero1 - numero2))
echo "La division es $numero1 / $numero2 = "$((numero1 / numero2))
echo "La multiplicacion es $numero1 * $numero2 = "$((numero1 * numero2))
echo "La potencia es $numero1 ** $numero2 = "$((numero1 ** numero2))
