#!/bin/bash
echo "Ingrese el  año de la primera fecha "
read year1
echo "ingrese el mes de la primera fecha"
read mes1
echo " ingrese el dia de la primera fecha"
read dia1
echo "Ingrese el año de la segunda fecha"
read year2
echo "Ingrese el mes de la segunda fecha"
read mes2
echo "Ingrese el dia de la segunda fecha"
read dia2

if [[ $year1 -gt $year2 ]];
then
difA=$((year1-year2))
elif [[ $year2 -gt $year1 ]];
then
difA=$((year2-year1))
else
difA=0
fi
difAT=$((difA * 365))

if [[ $mes1 -gt $mes2 ]];
then
difM=$((mes1 - mes2))
elif [[ $mes2 -gt $mes1 ]];
then
difM=$((mes2 - mes1))
else
difM=0
fi
difAM=$(( difM * 31 ))

if [[ $dia1 -gt $dia2 ]];
then
difD=$(( dia1 - dia2 ))
elif [[ $dia2 -gt $dia1 ]];
then
difD=$(( dia2 - dia1))
else
difD=0
fi
diferencia_total=$((difD + DifAM + difAT))
echo La diferencia de dias es $diferencia_total

