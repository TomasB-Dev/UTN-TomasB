#!/bin/bash
echo ingrese 5 palabras separadas por un espacio
read palabra1 palabra2 palabra3 palabra4 palabra5
mayor=$palabra1
if [[ ${#mayor} -lt ${#palabra2} ]];
then
mayor=$palabra2
fi
if [[ ${#mayor} -lt ${#palabra3} ]];
then
mayor=$palabra3
fi
if [[ ${#mayor} -lt ${#palabra4} ]];
then
mayor=$palabra4
fi
if [[ ${#mayor} -lt ${#palabra5} ]];
then
mayor=$palabra5
fi

echo la de mayor logitud es $mayor que tiene ${#mayor} letras


