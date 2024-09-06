#!/bin/bash
echo ingrese una frase
read frase
if [[ "$frase" == "${frase,,}" ]];then
echo la frase ya esta en minuscula
else
echo ${frase,,}
fi
