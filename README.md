# Compilateur MyP

## **Avancement**
Nous avons fini par implémenter les fonctionnalités des phases **I à VI** :

### 1. Gestion des expressions arithmétiques simples avec constantes  
Cette phase repose surtout sur la gestion des types.

### 2. Gestion/vérification/conversions de types  
Si un des opérandes est de type `float`, il faut convertir l'autre opérande en `float` avant d'appliquer l'opération.


### 3. Gestion des variables globales  
Il faut créer un offset pour chaque variable afin de localiser sa position par rapport au BP (Block Pointer) de son bloc. (La valeur initiale de l'offset est 0 pour les variables globales.)  
Ainsi, chaque variable globale rencontrée est ajoutée à la table des symboles avec l'offset et la profondeur appropriés (depth = 0 pour une variable globale).

### 4. Gestion des branchements  
Il faut bien manipuler les labels pour chaque branchement. Notre label est stocké dans le nom du branchement sous forme d'un entier, qui est incrémenté à chaque entrée de branchement.

on a aussi traiter le cas d'un if sans else .

### 5. Gestion des sous-blocs  
Ici, le point le plus critique est de pouvoir accéder aux variables en dehors de notre bloc courant, ce qui nécessite alors de connaître sa profondeur.  
Ainsi, il faut supprimer tous les symboles d'une profondeur donnée après la sortie d'un sous-bloc, ce qui nous a incités à implémenter une fonction `void remove_symbol_depth(int depth)` qui permet de supprimer tous les symboles d'une table de symboles à une profondeur donnée. Cela évite toute confusion lors de l'appel de la fonction `get_symbol_value` après la sortie d'un sous-bloc.  
Il faut bien noter que l'offset commence à 1 pour les sous-blocs, car la première case est réservée pour l'ancien BP.

### 6. Gestion des appels de fonctions  
La difficulté réside dans le fait de travailler avec des offsets négatifs. Il faut bien noter qu'ici, les arguments doivent être stockés de manière croissante, avec le premier argument ayant l'offset le plus petit(plus grand en valeur absolue), etc.


## **Compilation**
Exécutez :  
```bash
make
```


## **Exécution d’un programme MyP (Exemple 1.1)**

1. **Afficher le résultat dans la console** :  
   ```bash
   ./myp < test/test1.1.myp
   ```
   Cette commande compile le fichier MyP et affiche directement le résultat de son exécution dans la console

2. **Générer un fichier P-Code** :  
   ```bash
   ./run test1.1
   ```
   Cette commande génère un fichier P-Code nommé `test/test1.1_pcode.c`