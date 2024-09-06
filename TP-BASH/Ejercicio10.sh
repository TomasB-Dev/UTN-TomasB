#!/bin/bash
echo Ingrese las 5 notas separadas por un espacio
read nota1 nota2 nota3 nota4 nota5
promedio=$(((nota1 + nota2 +nota3 + nota4 + nota5)/5))
echo el promedio es de $promedio
