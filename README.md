# ZombieProcessManager
# README.txt

## Description

Ce projet contient deux programmes en C qui démontrent la gestion des processus sous Unix/Linux. Le premier programme crée un processus zombie et enregistre les processus actifs dans un fichier log. Le deuxième programme termine le processus zombie créé par le premier programme.

## Fichiers

1. `_Main__.c`
2. `Killer_process.c`

## Instructions de Compilation

Pour compiler les deux programmes, utilisez `gcc` comme suit :

```sh
gcc -o zombie_process zombie_process.c
gcc -o terminate_zombie terminate_zombie.c
