#!/bin/bash
echo Ingrese un numero
read numero
primo=1
for ((i=2; i<=numero/2;i++))
do
	if [[ $((numero % i)) -eq 0 ]]
	then
		primo=0
	fi
done
if [[ $numero -eq 1 ]];
then
echo "es primo"
fi
if [[ $primo -eq 1 ]];
then
echo "es primo"
else
echo "no es primo"
fi
