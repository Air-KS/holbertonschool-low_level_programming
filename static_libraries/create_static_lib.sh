#!/bin/bash

# Compiler tous les fichiers .c dans le répertoire courant en fichiers objets
gcc -c *.c

# Créer la bibliothèque statique liball.a à partir des fichiers objets créés précédemment
ar rcs liball.a *.o

# Supprimer les fichiers objets
rm *.o
