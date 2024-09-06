#!/bin/bash
echo Ingrese su usuario
read usuario
echo Ingrese su contraseña
read key

clave=cuenta
user=pepe

if [[ $usuario ==  $user && $key ==  $clave ]];
then
echo Iniciaste session
else
echo error verifique sus datos
fi
